#include <iostream>
#include <vector>

using namespace std;

void lis(int ar[],int n)
{
    vector<int> v[n];
    int sum[n]={0};

   sum[0]=ar[0];
   v[0].push_back(ar[0]);

   for(int i=1; i<n; i++)
   {
       for(int j=0; j<n; j++)
       {
           if(ar[i]>ar[j]&&sum[j]>sum[i])
           {
               v[i]=v[j];
               sum[i]=sum[j];
           }
       }
       v[i].push_back(ar[i]);
       sum[i]+=ar[i];
   }

   int m=0;
   for(int i:sum)
   {
       m=max(m,i);
   }
   int s=0;
   for(int i=0; i<n; i++)
   {

       if(sum[s]<sum[i])
        s=i;
   }
   cout<<"the maximum sum is: "<< m<<endl;

   for(int i:v[s])
    cout<< i<<" " ;
   cout<<endl;

}

int main()
{
    int ar[]={8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11};

    int n=sizeof(ar)/sizeof(int);

    lis(ar,n);

    return 0;
}
