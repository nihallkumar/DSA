#include <iostream>
using namespace std;

bool isprime(int n)
{
    if (n <= 1)
        return false;

    int c = 2;

    while (c * c <= n)
    {
        if (n % c == 0)
            return false;

        c++;
    }
    return true;
}

int main()
{
    int n = 20;

    for (int i = 2; i < n; i++)
    {
        cout << i << " " << isprime(i) << endl;
    }

    return 0;
}