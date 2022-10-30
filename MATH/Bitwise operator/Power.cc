#include <iostream>
using namespace std;
int main()
{
    int base;
    int power;

    cout << "enter a no : ";
    cin >> base;
    cout << "enter its power : ";
    cin >> power;

    int ans = 1;

    while (power > 0)
    {
        if ((power & 1 == 1))
        {
            ans *= base;
        }

        base *= base;
        power = power >> 1;
    }

    cout << "answer : " << ans;

    return 0;
}