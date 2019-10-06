#include <iostream>
#include <unordered_map>
#include <iterator>
#include <vector>
#include <list>
#include <queue>

using namespace std;
class Graph
{
    int node;
    list<int>*adj;
    list<int>::iterator it;
public:
    Graph(int x)
    {
        adj=new list<int>[x];
    }
    void add(int x,int y)
    {
        adj[x].push_back(y);

    }
    bool iscicle(bool visited[],int s)
    {
        if(visited[s]==false)
        {
            visited[s]=true;
            for(it=adj[s].begin();it !=adj[s].end();it++)
            {
                if(visited[*it]==false)
                {
                    if(iscicle(visited,*it))
                        return true;
                }

                if(*it !=s)
                    return true;
                else
                    return false;
            }


        }
    }
};
int main()
{
    int node,edge;
    cin>>node>>edge;
    Graph g(node);
    for(int i=0;i<edge;i++)
    {
        int a,b;
        cin>>a>>b;
        g.add(a,b);
    }

    bool visited[node]={false};

    bool flag=g.iscicle(visited,0);

    if(flag)
        cout<< "the graph is a tree."<<endl;
    else
        cout<< "the graph is not tree. "<<endl;



    return 0;
}
