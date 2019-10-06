#include <iostream>
#include <vector>
#include <iterator>
#include <stack>
using namespace std;


void dfs(vector <int> adj[], bool visited[], stack <int> &stk, int s)
{
    if(visited[s]==false)
    {
        visited[s]=true;

        for(int i=0; i<adj[s].size(); i++)
        {
            int m= adj[s][i];
            if(visited[m]==false)
            {
                dfs(adj, visited, stk, m);
            }
        }

        stk.push(s);
    }
}


//find strongly connected component
void ssc(vector<int>adj[],bool visited[],int s)
{
    if(visited[s]==false)
    {
        visited[s]=true;

        for(int i=0; i<adj[s].size(); i++)
        {
            int m=adj[s][i];

            if(visited[m]==false)
            {
                ssc(adj,visited,m);
            }
        }
        cout<< s<< " ";
    }
}

//reverse the graph....
void reverse_graph(vector<int>v1[],vector<int>v2[],int vartex)
{
    vector<int>::iterator it;

    for(int i=0; i<vartex; i++)
    {
        for(it=v1[i].begin(); it!=v1[i].end(); ++it)
        {
            v2[*it].push_back(i);
        }
    }

}



int main()
{
    freopen("input4.txt","r",stdin);
    int vartex,edges;

    cin>>vartex>>edges;

    vector<int>adj[vartex];
    vector<int>adj2[vartex];

    stack<int>stk;

    for(int i=0; i<edges; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);

    }


    bool visited[vartex];

    for(int i=0; i<vartex; i++)
    {
        visited[i]=false;
    }

    //for store finishing time
    for(int i=0; i<vartex; i++)
    {
        if(visited[i]==false)
        {
            dfs(adj,visited,stk,i);
        }
    }

    //reverse the graph and store in adj2.....
    reverse_graph(adj,adj2,vartex);

    for(int i=0; i<vartex; i++)
    {
        visited[i]=false;
    }

//printing strongly connected component.........
    while(!stk.empty())
    {
        int x=stk.top();

        stk.pop();

        if(visited[x]==false)
        {
            ssc(adj2,visited,x);
            cout<<endl;
        }
    }


    return 0;
}
