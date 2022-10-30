#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double n = 40;
    double x = n;
    double root;

    while(true)
    {
        root = 0.5 * (x + (n/x));

        if(abs(root-x) < 0.001)
            break;
        
        x = root;
    }

    cout<<root;

    return 0;
}