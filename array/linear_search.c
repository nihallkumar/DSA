#include<stdio.h>
int linearsearch(int arr[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
            return i+1;
    }
    return -1;
}
int main()
{
    int n;
    printf("enter size : ");
    scanf("%d",&n);
    int arr[n];
    int i;
    printf("enter elements : ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    int x;
    printf("enter element u want to search : ");
    scanf("%d",&x);

    int result=linearsearch(arr,n,x);
    
    result==-1?printf("element not exist"):printf("element found at position %d",result);

    return 0;
}