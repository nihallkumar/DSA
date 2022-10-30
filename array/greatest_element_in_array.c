#include<stdio.h>
int main()
{
    int n,i;
    printf("enter no of element in array u want to insert : ");
    scanf("%d",&n);
    
    int arr[n];

    printf("enter elements in array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int g=arr[0];

    for(i=0;i<n;i++)
    {
        if(arr[i]>g)
            g=arr[i];
    }
    
    printf("gretest element is : %d",g);
    
    return 0;
}
