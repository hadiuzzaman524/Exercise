#include <iostream>
#include <vector>
using namespace std;

//vector<int>m[10];
void makeset(int u,int parent[])
{
    parent[u]=u;
    return ;
}


int findset(int a,int parent[])
{
    if(parent[a]=a)
        return a;

    return findset(parent[a],parent);

}

void unionn(int a,int b,int parent[])
{
    int u=findset(a,parent);
    int v=findset(b,parent);

    if(u!=v)
    {
        parent[u]=v;
       // m[u].push_back(v);
    }
    return ;

}


int main()
{
//..........................................................
    int n;
    cout<< "how many node are there: ";
    cin>>n;
    int parent[n];
    int e;
    cout<< "how many edges: ";
    cin>>e;

//...........................................................
    for(int i=0; i<n; i++)
    {
        makeset(i,parent);
    }

    for(int i=0; i<e; i++)
    {
        int a,b;
        cin>>a>>b;
        unionn(a,b,parent);
    }

  /*  for(int i=0; i<5; i++)
    {
        for(int j=0; j<m[i].size(); j++)
        {
            cout<< m[i][j]<< " ";
        }
        cout<<endl;
    }*/
//...........................................................


    return 0;
}
