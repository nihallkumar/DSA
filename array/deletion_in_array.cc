// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter no of elements u want in array : ");
//     scanf("%d", &n);

//     int arr[n];
//     printf("enter elementd in array : ");
//     int i;
//     for (i = 0; i < n; i++)
//         scanf("%d", &arr[i]);

//     int val;
//     printf("enter element to delete : ");
//     scanf("%d", &val);

//     for (i = 0; i < n; i++)
//     {
//         if (arr[i] == val)
//         {
//             break;
//         }
//     }

//     if (i < n)
//     {
//         int j;
//         n--;

//         for (j = i; j < n; j++)
//         {
//             arr[j] = arr[j + 1];
//         }

//         printf("upddated array : ");
//         for (i = 0; i < n; i++)
//         {
//             printf("%d ", arr[i]);
//         }
//     }

//     else
//     {
//         printf("deletion is not possible");
//     }

//     return 0;
// }


#include<iostream>
using namespace std;

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};

    int n=9;
    int val=5;

    print(arr,n);

    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==val)
            break;
    }

    n--;
    for(int j=i;j<n;j++)
    {
        arr[j]=arr[j+1];
    }

    print(arr,n);


    return 0;
}