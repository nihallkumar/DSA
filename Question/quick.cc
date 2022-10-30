#include <iostream>
using namespace std;



void displayarray(int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {7, 5, 31, 8, 9, 3, 1, 5};

    displayarray(arr, 8);



    return 0;
}