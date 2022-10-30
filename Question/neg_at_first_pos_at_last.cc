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

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void arrange(int arr[], int s)
{

    int i=0;
    int j=s-1;

    while(i<j)
    {
        if(arr[i]>=0)
            i++;
        if(arr[i]<0)
        {
            swap(arr,i,j);
            j--;
        }
    }

    // int j=0;

    // for(int i=0;i<s;i++)
    // {
    //     if(arr[i]<0)
    //     {
    //         swap(arr,i,j);
    //         j++;
    //     }
    // }
}

int main()
{
    int arr[] = {4, -5, 2, -1, -4, -11, 1, 0, -3, -2};

    displayarray(arr, 10);

    arrange(arr,10);

    displayarray(arr,10);
    
    return 0;
}