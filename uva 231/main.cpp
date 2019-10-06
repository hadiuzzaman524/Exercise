#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
   // freopen("input.txt","r",stdin);

    vector<int>v;
    int n;
    int jaman=0;
    string st="";
    while(scanf("%d",&n)!=EOF)
    {
        if(n==-1)
            continue;

        v.push_back(n);

        for(;;)
        {
            cin>>n;
            if(n==-1)
                break;
            else
                v.push_back(n);
        }
        reverse(v.begin(), v.end());

        vector<int>sum(v.size(),0);

        sum[0]=1;

        for(int i=1; i<v.size(); i++)
        {
            for(int j=0; j<i; j++)
            {
                if(v[i]>v[j]&&sum[j]>sum[i])
                {
                    sum[i]=sum[j];
                }
            }
            sum[i]++;
        }
        v.clear();
        int m=0;

        for(int i:sum)
        {
            m=max(m,i);
        }

        cout<< st<<"Test #"<<++jaman<<":"<<endl;
        cout<< "  "<<"maximum possible interceptions: "<<m<<endl;
        st="\n";
    }
    return 0;
}
