#include<iostream>
using namespace std;

void printarray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertion(int arr[],int n)
{
    int i,j,curr;
    for(i=1;i<n;i++)
    {   
        curr=arr[i];
        j=i-1;
        while(j>=0 && curr<arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
    }
}

int main()
{

    int arr[]={12,13,62,5,2,2};
    int n=6;

    printarray(arr,n);

    insertion(arr,n);

    printarray(arr,n);

    return 0;
}