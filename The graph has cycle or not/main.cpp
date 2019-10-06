#include <iostream>
#include <vector>

using namespace std;
int cycle=0;

void dfs(vector<int>adjacency_list[],bool visited[],int s,int vartex)
{
    int parent[vartex];
    if(visited[s]==false)
    {
        visited[s]=true;
        for(int i=0;i<adjacency_list[s].size();i++)
        {
            int m=adjacency_list[s][i];
            if(visited[m]==false)
            {
                parent[m]=s;
                dfs(adjacency_list,visited,m,vartex);
            }
            else
            {
                if(s!=parent[m])
                {
                   cycle++;
                }

            }

        }
    }
}

int main()
{

    freopen("input.txt","r",stdin);

    int vartex,edge;
    cin>>vartex>>edge;

    vector<int>adjacency_list[vartex];

    //for directed graph.................
    for(int i=0;i<edge;i++)
    {
        int u,v;
        cin>>u>>v;
        adjacency_list[u].push_back(v);

    }

    bool visited[vartex];
    for(int i=0;i<vartex;i++)
        visited[i]=false;

    for(int i=0;i<vartex;i++)
    {
        if(visited[i]==false)
        {
            dfs(adjacency_list,visited,i,vartex);
        }
    }

    if(cycle>0)
    {
       cout<< "there are "<< cycle<< " in the graph."<<endl;
    }
    else
    {
        cout<< "there are no cycle in the graph."<<endl;
    }



    return 0;
}
