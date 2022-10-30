#include<iostream>
using namespace std;

void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {   
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swap(int arr[], int x, int y)
{
    int temp=arr[x];
    arr[x]=arr[y];
    arr[y]=temp;
}

int partition(int arr[],int l,int r)
{
    int pivot = arr[r];
    int i=l-1;

    for(int j=l;j<r;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}

void quicksort(int arr[],int l, int r)
{
    if(l<r)
    {
        int pi=partition(arr,l,r);

        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);
    }
}

int main()
{
    int arr[]={2,1,2,22,3,6,7,9,56,87};
    int n=10;

    printarray(arr,n);

    quicksort(arr,0,9);

    printarray(arr,n);
    return 0;
}