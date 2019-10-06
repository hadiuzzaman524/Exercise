#include <iostream>
#include <vector>
using namespace std;


static int c=0;

void dfs(vector<int> v[],int s,bool visited[])
{
    if(visited[s]==false)
    {
        visited[s]=true;
        c++;

        for(int i=0; i<v[s].size(); i++)
        {
            int m=v[s][i];
            if(visited[m]==false)
                dfs(v,m,visited);
        }
    }

}

int main()
{ freopen("input2.txt","r",stdin);
    int node,edge;
   // cout<< "how many node and edge in the graph? ";
    cin>>node>>edge;

    vector<int>v[node];
    for(int i=0; i<edge; i++)
    {
        int m,n;
        cin>>m>>n;
        v[m].push_back(n);
        v[n].push_back(m);
    }

    bool visited[node]= {false};

    dfs(v,0,visited);

    if(node==c)
        cout<< "the graph is connected ."<<endl;
    else
        cout<< "the graph is not connected."<<endl;




    return 0;
}
