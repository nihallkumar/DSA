#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 36;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                cout << i << " ";
            else
                cout << i << " " << n / i << " ";
        }
    }

    return 0;
}