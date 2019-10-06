#include <iostream>

using namespace std;
int rodCut(int price[],int n)
{
    int table[n+1];
    for(int i=0;i<=n;i++)
        table[i]=0;

    for(int i=1; i<=n;i++)
    {
        for(int j=1; j<=i;j++)
        {
            table[i]=max(table[i],price[j-1]+table[i-j]);
        }
    }
    return table[n];
}
int main()
{
    int length[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    int price [] = { 1, 5, 8, 9, 10, 17, 17, 20 };

    // rod length
    int n = 4;

    cout << "Profit is " << rodCut(price, n);
    return 0;
}
