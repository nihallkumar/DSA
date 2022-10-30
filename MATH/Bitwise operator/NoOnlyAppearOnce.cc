#include <iostream>
using namespace std;

int ans(int arr[], int size)
{
    int unique = 0;

    for (int i = 0; i < size ;i++)
    {
        unique ^= arr[i];
    }

    return unique;
}

int main()
{
    int arr[] = {2, 3, 3, 4, 2, 6, 4};

    int size = sizeof(arr)/sizeof(arr[0]);

    cout << ans(arr,size);

    return 0;
}