#include <iostream>
using namespace std;

 bool marked[100];

void sieve(int n)
{
    for(int i=2; i*i<=2; i++)
    {
        if(marked[i]==false)
        {
            for(int j=i*i; j<=n; j+=i)
            {
                marked[j]=false;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);



    sieve(100);

    for(int i=2; i<=100; i++)
    {
        if(marked[i]==false)
            cout<< i<< " ";
    }
    cout<<endl;
    return 0;
}
