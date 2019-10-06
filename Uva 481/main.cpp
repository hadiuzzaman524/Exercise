#include <iostream>
#include <vector>
#include <unordered_set>
#include <stdio.h>
using namespace std;

int main()
{    freopen("input.txt","r",stdin);
    //unordered_set<int>v;
    vector<int>v;
    int n;
    while(scanf("%d",&n)==1)
    {
       // v.insert(n);
       v.push_back(n);

    }
    vector<int> table[v.size()];
    vector<int>sum(0);

    table[0].push_back(v[0]);
    sum[0]=1;

    for(int i=1; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(v[i]>v[j]&&table[j].size()>table[i].size())
            {
                table[i]=table[j];
                sum[i]=sum[j];
            }
        }
        sum[i]++;
        table[i].push_back(v[i]);

    }
    int maximum=0;

    for(int i: sum)
    {
        maximum=max(maximum,i);
    }
    cout<<maximum<<endl;


    return 0;
}
