#include <iostream>
#include <vector>
using namespace std;


static int c=0;
int count=0;


void dfs(vector<int> v[],int s,int n,bool visited[])
{
    if(count==0)
    {
        for(int i=0;i<n;i++)
            visited[i]=false;
         ++count;
    }

    if(visited[s]==false)
    {
        visited[s]=true;

        c++;
        for(int i=0; i<v[s].size(); i++)
        {
            int m=v[s][i];
            if(visited[m]==false)
            {
                dfs(v,m,n,visited);

            }

        }
      //  cout<< s<< " ";
    }


}

int main()
{   freopen("input2.txt","r",stdin);

    int node,edge;
   // cout<< "how many node and edge in the graph? ";
    cin>>node>>edge;

    vector<int>v[node];

    for(int i=0; i<edge; i++)
    {
        int m,n;
        cin>>m>>n;
        v[m].push_back(n);
    }
    cout<<endl;

    bool visited[node];
    for(int i=0; i<node; i++)
    {   count=0;
        dfs(v,i,node,visited);
    }

    if(c==node*node)
        cout<< "the graph is strongly connected"<<endl;
    else
        cout<< "the graph is not strongly connected"<<endl;

    return 0;
}
