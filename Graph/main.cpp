#include <bits/stdc++.h>
using namespace std;

void BFS(vector<int>v[],int n,int source)
{
    bool visited[n+1]= {false};
    queue<int>q;
    visited[source]=true;
    q.push(source);

    while(!q.empty())
    {
        int u=q.front();
        cout<< char(u+'A')<< " ";
        q.pop();
        for(int i=0; i<v[u].size(); i++)
        {
            int m=v[u][i];
            if(visited[m]==false)
            {
                q.push(m);
                visited[m]=true;
            }

        }
    }



    /*for(int i=0; i<n; i++)
      {
          for(int j=0; j<v[i].size(); j++)
          {
              cout<<char(v[i][j]+'A')<< " ";
          }
          cout<<endl;
      }*/
}
void DFS(vector<int>v[],bool visited[],int source)
{
    if(visited[source]==false)
    {
        cout<< char(source+'A')<< " ";
        visited[source]=true;
        for(int i=0; i<v[source].size(); i++)
        {
            int m=v[source][i];
            if(visited[m]==false)
            {
                DFS(v,visited,m);
            }
        }
    }
}

int main()
{

    int node;
    int edges;
    cout<< "how many node and edges?";
    cin>>node>>edges;
    vector<int> v[node];


    for(int i=0; i<edges; i++)
    {
        cout<< "enter edge"<<i+1<< " : ";
        char j,k;
        cin>>j>>k;
        int source=j-'A';
        int des=k-'A';

        //for undirected graph
        v[source].push_back(des);
        v[des].push_back(source);
    }

    cout<< "Breadth first search result is: ";
    BFS(v,node,'A'-'A');



    cout<<endl;
    cout<< "Depth first search result is: ";
    bool visited[node]= {false};
    for(int i=0; i<node; i++)
    {
        if(visited[i]==false)
        {
            DFS(v,visited,'A'-'A');
        }

    }






    return 0;
}
