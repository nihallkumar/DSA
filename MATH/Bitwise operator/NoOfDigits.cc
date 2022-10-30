#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "enter a no to finds it no of digits in binary : ";
    cin >> n;

    int b = 2;

    int ans = log(n) / log(b) + 1;

    cout << "No of digits :: " << ans;
    return 0;
}