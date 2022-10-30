#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number to find its magic no :: ";
    cin >> n;

    int ans = 0;
    int base = 5;
    int last;

    while (n > 0)
    {
        last = n & 1;
        ans += last * base;
        n = n >> 1;
        base *= 5;
    }

    cout << "magic no :: " << ans;
    return 0;
}
