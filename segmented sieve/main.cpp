#include <iostream>
#define maxx 32000
#include <vector>
using namespace std;
vector<int>primes;

void sieve()
{
    bool isprime[maxx];
    for(int i=0; i<=maxx; i++)
        isprime[i]= true;

    for(int i=3; i*i<=maxx; i=i+2)
    {
        if(isprime[i])
        {
            for(int j=i*i; j<=maxx; j+=i+i)
            {
                isprime[j]=false;
            }
        }
    }

    primes.push_back(2);

    for(int i=3; i<=maxx; i=i+2)
    {
        if(isprime[i])
        {
            primes.push_back(i);
        }
    }

}

void segment_sieve(long long left,long long right)
{
    int d=right-left+1;

    bool isprime[d];
    for(int i=0; i<d; i++)
    {
        isprime[i]=true;
    }
    if(left==1)
        isprime[0]=false;

    for(int i=0; primes[i]*primes[i]<=right; i++)
    {
        int current_prime=primes[i];

        int base=(left/current_prime)*current_prime;
        if(base < left)
            base+=current_prime;

        for(int j=base; j<=right; j+=current_prime)
        {
            isprime[j-left]=false;
        }

        if(current_prime==base)
            isprime[base-left]=true;
    }

    for(int i=0; i<d; i++)
    {
        if(isprime[i])
            cout<< left+i<< " ";
    }
    cout<<endl;

}


int main()
{
    sieve();

   segment_sieve(3,5);

    return 0;
}
