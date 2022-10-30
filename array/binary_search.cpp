#include <iostream>
using namespace std;

int search(int arr[], int x, int beg, int end)
{

    while (beg <= end)
    {
        int mid = beg + (beg + end) / 2;

        if (arr[mid] > x)
            end = mid - 1;
        else
            beg = mid + 1;

        if (arr[mid] == x)
            return mid;
    }

    return -1;
}

int main()
{
    int s;
    cout << "enter size of array : ";
    cin >> s;
    int arr[s];
    int ele, x;
    for (int i = 0; i < s; i++)
    {
        cout << "enter element : ";
        cin >> x;
        arr[i] = x;
    }

    cout << "enter value to search : ";
    cin >> x;

    int z = search(arr, x, 0, s - 1);
    cout << "value found at : " << z;

    return 0;
}