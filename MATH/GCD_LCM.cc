#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }

    return gcd(b % a, a);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    cout << "HCF : " << gcd(4, 9) << endl;
    cout << "LCM : " << lcm(4, 12) << endl;

    return 0;
}