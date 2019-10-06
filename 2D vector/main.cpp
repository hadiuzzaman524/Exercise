#include <iostream>
using namespace std;

int bin(int s,int ar[],int n)
{
    int low=0;
    int high=n-1;
  if(s>ar[high])
    return high;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(s==ar[mid])
            return mid;

        else if(s>ar[mid])
            low=mid+1;

        else
            high=mid-1;
    }
}
int main()
{

    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }

    int q;
    cin>>q;


    for(int i=0; i<q; i++)
    {
        int s;
        cin>>s;
        int b=bin(s,ar,n);
        int sum=0;
        int sum2=0;
        for(int i=0; i<=b; i++)
        {
            sum+=ar[i];
            sum2++;
        }
        cout<< sum2<< " "<< sum<<endl;

    }








}
