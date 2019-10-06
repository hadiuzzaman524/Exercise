#include <iostream>
#include <algorithm>

#define gcd(a,b) __gcd(a,b)
#define lcd(a,b) a*(b/__gcd(a,b))

using namespace std;

int main()
{
    int a=10;
    int b=5;
    cout<< gcd(a,b)<<endl;
    cout<< lcd(a,b)<<endl;

    return 0;
}
