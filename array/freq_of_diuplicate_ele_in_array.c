#include<stdio.h>
int main(){

    int n;
    printf("enter no of elements in array : ");
    scanf("%d",&n);
    
    int arr[n],freq[n];
    printf("enter %d elements in array : ",n);
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

        freq[i]=-1;
    }

    int count;

    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;

                freq[j]=0;
            }
        }

        if(freq[i]!=0)
        {
            freq[i]=count;
        }
    }

    printf("frequency of each element : \n");
    for(i=0;i<n;i++)
    {
        if(freq[i]!=0)
            printf("%d : %d times \n",arr[i],freq[i]);
    }

    return 0;
}