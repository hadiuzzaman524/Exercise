#include <iostream>
#include <list>

using namespace std;
void bitonicsequence(int ar[],int n)
{

    list<int> l1[n];
    list<int> l2[n];

    l1[0].push_back(ar[0]);

    for(int i=1; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(ar[i]>ar[j]&&l1[j].size()>l1[i].size())
            {
                l1[i]=l1[j];
            }
        }
        l1[i].push_back(ar[i]);

    }


    l2[n-1].push_front(ar[n-1]);

    for(int i=n-2; i>=0; i--)
    {
        for(int j=n-1; j>=i; j--)
        {
            if(ar[i]>ar[j]&&l2[j].size()>l2[i].size())
            {
                l2[i]=l2[j];
            }
        }
        l2[i].push_front(ar[i]);
    }

    int s=0;
    for(int i=1; i<n; i++)
    {
        int m=l1[s].size()+l2[s].size();
        int k=l1[i].size()+l2[i].size();

        if(m>k)
        {
            s=m;
        }
    }

    for(int i:l1[s])
        cout<< i<< " ";

    l2[s].pop_front();

    for(int i:l2[s])
        cout<< i<< " ";

    cout<<endl;

}
int main()
{
    int ar[]={4,2,5,9,7,6,10,3,1};
    int n=sizeof(ar)/sizeof(int);

    bitonicsequence(ar,n);
    return 0;
}
