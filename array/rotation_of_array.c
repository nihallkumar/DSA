#include <stdio.h>
void shift(int arr[], int n, int t)
{
    int i, j;
    for (i = 0; i < t; i++)
    {
        // int temp=arr[0];
        // for(j=0;j<n-1;j++)
        //     arr[j]=arr[j+1];

        // arr[n-1]=temp;

        int temp = arr[n - 1];
        for (j = n - 1; j > 0; j--)
            arr[j] = arr[j - 1];

        arr[0] = temp;
    }
}

void printarray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
}
int main()
{
    int n;
    printf("enter size : ");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements in array : ");
    int i, j;
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int t;
    printf("enter how many times u want to rotate the array : ");
    scanf("%d", &t);

    shift(arr, n, t);

    printarray(arr, n);

    return 0;
}