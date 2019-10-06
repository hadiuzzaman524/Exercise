#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

void show(vector<int>v[],int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int ar1[v[i].size()];
            int ar2[v[j].size()];

            for(int m=0; m<v[i].size(); m++)
            {
                ar1[m]=v[i][m];
            }
            for(int k=0; k<v[j].size(); k++)
            {
                ar2[k]=v[j][k];
            }
            cout<<i<< " , " <<j<< " : ";

            int s1=sizeof(ar1)/sizeof(int);
            int s2=sizeof(ar2)/sizeof(int);

            int big=max(s1,s2);
            int small=min(s1,s2);

            for(int i=0; i<big; i++)
            {
                for(int j=0; j<small; j++)
                {
                    if(ar1[i]==ar2[j])
                        cout<< ar1[i]<<" ";
                }


            }
            cout<<endl;
        }

    }
}

int main()
{
    freopen("input.txt","r",stdin);
    int node;
    int edges;
    cin>>node>>edges;
    vector<int> v[node];


    for(int i=0; i<edges; i++)
    {
        int source;
        int des;
        cin>>source>>des;

        v[source].push_back(des);
        v[des].push_back(source);
    }

    cout<< "The adjacency list is: "<<endl;
    for(int i=0; i<node; i++)
    {
        cout<<i<< "- ";
        for(int j=0; j<v[i].size(); j++)
        {
            cout<< v[i][j]<< " ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;

    cout<< "the common adjacency vertex: "<<endl;
    show(v,node);


    return 0;
}
