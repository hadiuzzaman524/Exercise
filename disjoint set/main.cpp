#include <iostream>
#include <vector>
using namespace std;

void makeset(int i,int v[])
{
    v[i]=i;
    return ;

}

int findrepresentative(int v[],int m)
{
    if(v[m]==m)
        return m;

    return findrepresentative(v, v[m]);
}

void unionf(int a,int b,int v[])
{
    int u=findrepresentative(v,a);
    int x=findrepresentative(v,b);
   // cout<< u<< " "<<x<< " ";

    if(u!=x)
        v[u]=x;

}

void disjoint(int v[],int n)
{
    for(int i=0; i<n; i++)
    {
        makeset(i,v);
    }

}
void print(int v[])
{
    for(int i=0;i<10;i++)
    {
        cout<<findrepresentative(v,i)<< " ";
    }
}

int main()
{
    int wholeset[]={4,5,1,6,8};
    int n=sizeof(wholeset)/sizeof(int);

    disjoint(wholeset,n);
    unionf(4,9,wholeset);
    print(wholeset);



    return 0;
}
