#include <iostream>
using namespace std;
int main()
{
    int n = 40;
    bool primes[n] = {0};

    for (int i = 2; i * i <= n; i++)
    {
        if (!primes[i])
        {
            for (int j = i * 2; j <= n; j += i)
            {
                primes[j] = true;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (!primes[i])
            cout << i << " ";
    }

    return 0;
}