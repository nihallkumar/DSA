#include <iostream>
using namespace std;

int XOR(int a)
{
    if (a % 4 == 0)
        return a;

    if (a % 4 == 1)
        return 1;

    if (a % 4 == 2)
        return a + 1;

    return 0;
}

int main()
{
    // range xor for a,b = xor(b) ^ xor(a-1);
    int a = 3;
    int b = 9;

    int ans = XOR(b) ^ XOR(a - 1);

    cout << ans;

    return 0;
}