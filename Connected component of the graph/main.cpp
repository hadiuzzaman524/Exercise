#include <iostream>
#include <vector>
using namespace std;


void dfs(vector<int> v[],int s,bool visited[])
{
    if(visited[s]==false)
    {
        visited[s]=true;


        for(int i=0; i<v[s].size(); i++)
        {
            int m=v[s][i];
            if(visited[m]==false)
                dfs(v,m,visited);
        }
    }

}

int main()
{
    freopen("input2.txt","r",stdin);
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


    int c=0;
    bool visited[node]= {false};
    for(int i=0; i<node; i++)
    {
        if(visited[i]==false)
        {
            dfs(v,i,visited);
            c++;
        }

    }
cout<< "the number of the connected component of the graph is: "<< c<<endl;


    return 0;
}
