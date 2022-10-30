#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n =8;
    int count = 0;

    // while (n > 0)
    // {
    //     count++;
    //     n = n - (n & -n);
    // }

    while(n>0)
    {
        count++;
        n = n & (n-1);
    }

    cout << count;

    return 0;
}