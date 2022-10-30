#include<stdio.h>
int main()
{
    int n;
    printf("enter no of elements u want in array : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements in array : ");
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int val,pos;
    printf("enter value u want to insert in this array : ");
    scanf("%d",&val);
    printf("at position? : ");
    scanf("%d",&pos);

    n++;

    for(i=n-1;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }

    arr[pos-1]=val;
    
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}