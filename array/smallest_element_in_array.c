#include<stdio.h>
int main(){

    int n;
    printf("enter no of element u want to insert in array : ");
    scanf("%d",&n);
    int arr[n];

    printf("enter elements in array : ");

    int i;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    int s=arr[0];

    for(i=0;i<n;i++)
    {
        if(arr[i]<s)
        {
            s=arr[i];
        }
    }

    printf("smallest element is : %d",s);


    return 0;
}