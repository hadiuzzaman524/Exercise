#include <iostream>

using namespace std;

int main()
{

    int n;
    cin>>n;
    int x;

    int r[25];
    int ord[25];

    for(int i=0; i<n; i++)
    {

        cin>>x;
        r[x-1]=i;

    }

     while(scanf("%d",&x)==1)
     {
        ord[x-1]=0;

        for(int i=1; i<n; i++)
        {
            cin>>x;
            ord[x-1]=i;
        }

        int table[n+1][n+1];

        for(int i=0;i<=n; i++)
        {
            for(int j=0; j<=n; j++)
            {
                if(i==0||j==0)
                {
                    table[i][j]=0;
                }
                else if(r[i-1]==ord[j-1])
                {
                    table[i][j]=table[i-1][j-1]+1;
                }
                else
                {
                    table[i][j]=max(table[i-1][j],table[i][j-1]);
                }
            }
        }
       cout<<table[n][n]<<endl;

     }
        return 0;
}
