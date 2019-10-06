#include<stdio.h>
#include<limits.h>
#define S 100000

int R[S]= {0}; /*Generated Table*/
int A[S] = {0};/*Input data*/
int Indx[S]= {0}; /*Index of the Table Element*/
int Pre[S]= {0}; /*Previous Element*/

void Print(int i)
{
    if ( i == 0)
        return;
    else
    {
        Print(Pre[i]);
        printf("%d\n",A[i]);
    }
    return;
}
/*Complexity lg2^N*/
int BS(int v,int s,int e)
{
    int mid=0;
    while(s<=e)
    {
        mid = s+((e-s)/2);
        if (v<=R[mid])
        {
            if(R[mid-1]<v)
                break;
            e = mid-1;
        }
        else if (v>R[mid])
        {
            if(R[mid+1]>=v)
            {
                mid= mid+1;
                break;
            }
            s = mid+1;
        }
    }
    return mid;
}

int main()
{
    freopen("input.txt","r",stdin);

    int i,v=0;
    int rc;
    int s,e,mid;/*Binary Search*/

    /*freopen("481.in","r",stdin);*/

    A[0]=R[0] = INT_MIN;
    Indx[0] = 0;
    i=1,rc=1;

    while(scanf("%d", &A[i]) == 1)
    {
        v = A[i];
        if(v>R[rc-1])
        {
            R[rc] = v;
            Indx[rc] = i;
            Pre[i] = Indx[rc-1];
            rc++;
        }
        else if(v<R[rc-1]) /*Binary Search*/
        {
            mid = BS(v,1,rc-1);
            R[mid] = v;
            Indx[mid]= i;
            Pre[i] = Indx[mid-1];
        }
        i++;
    }

    printf("%d\n-\n",rc-1);
    i = Indx[rc-1];
    Print(i);
    return 0;
}
