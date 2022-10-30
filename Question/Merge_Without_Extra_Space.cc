#include <iostream>
using namespace std;

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap(int arr1[], int i, int arr2[], int j)
{
    int temp = arr1[i];
    arr1[i] = arr2[j];
    arr2[j] = temp;
}

void merge(int arr1[], int arr2[], int n, int m)
{
    int i = 0;
    int j = 0;

    while (i < n)
    {
        if (arr2[j] < arr1[i])
        {
            swap(arr1, i, arr2, j);

            if (arr1[i] > arr1[i + 1])
            {
                swap(arr1, i, arr1, i + 1);
            }
            if (arr2[j] > arr2[j + 1])
            {
                swap(arr2, j, arr2, j + 1);
            }
            i++;
        }
    }
    while (j < m)
    {
        if (arr2[j] > arr2[j + 1])
        {
            swap(arr2, j, arr2, j + 1);
            if(j==0)
            {
                j++;
                continue;
            }
            if (arr2[j - 1] > arr2[j])
            {
                swap(arr2, j - 1, arr2, j);
            }
            j++;
        }
        else
        {
            j++;
        }
    }
}

int main()
{
    int arr1[] = {1, 3,};
    int arr2[] = {0, 2, };
    int n = 2;
    int m = 2;

    printarray(arr1, n);
    printarray(arr2, m);

    cout << endl;

    merge(arr1, arr2, n, m);

    printarray(arr1, n);
    printarray(arr2, m);

    return 0;
}