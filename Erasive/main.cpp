#include <iostream>

using namespace std;


void sieve(bool visited[],int n)
{
    for(int i=3; i*i<=n; i+=2)
    {
        if(visited[i]==false)
        {
            for(int j=i*i; j<=n; j+=i+i)
            {
                visited[j]=true;
            }
        }
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    bool visited[101]= {false};
    sieve(visited,100);

    for(int i=3; i<=100; i=i+2)
    {
        if(visited[i]==false)
        {
            cout<< i<< " ";
        }
    }


    cout<<endl;
    return 0;
}
