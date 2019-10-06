#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

bool c;

void findcycle(vector<int>adj[],bool visited[],int s,int parent[])
{

    if(visited[s]==false)
    {

    visited[s]=true;

    for(int i=0; i<adj[s].size(); i++)
    {
        int m=adj[s][i];

        if(visited[m]==false)
        {
            parent[m]=s;
            findcycle(adj,visited,m,parent);
        }

        else
        {
            if(s!=parent[m])
                c=false;
            else
                c=true;
        }
    }

    }
    cout<<s<< " ";
}


int main()
{

    freopen("input.txt","r",stdin);
    int vartex,node;
    cin>>vartex>>node;

    vector<int>adj[vartex];

    for(int i=0; i<vartex; i++)
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

    int connected=0;
    int parent[vartex];
    for(int i=0; i<vartex; i++)
    {
        if(visited[i]==false)
        {
            findcycle(adj,visited,i,parent);
            connected++;
        }
    }
    cout<<endl;
//check cycle or not............
    if(c==true)
    {
        cout<<"Yes "<<endl;
    }
    else
    {
        cout<< "No"<<endl;
    }

    //check DAG..........

    if(c==false)
    {
        cout<< "Yes"<<endl;
    }

    //check connected...........
    if(connected==vartex)
    {
        cout<< "Yes"<<endl;
    }
    else
    {
        cout<< "No"<<endl;
    }

    // total connected component ....
    cout<<connected<<endl;
    return 0;
}
