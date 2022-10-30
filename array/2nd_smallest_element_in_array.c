#include <stdio.h>
int main()
{

    int n;
    printf("enter no of elements u want in array : ");
    scanf("%d", &n);

    int arr[n - 1];
    printf("enter elements in array : ");
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int s1, s2;

    s1 = arr[0];
    if (arr[1] < s1)
    {
        s2 = s1;
        s1 = arr[1];
    }
    else
    {
        s2 = arr[1];
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] < s1)
        {
            s2 = s1;
            s1 = arr[i];
        }
    }

    printf("2nd smallest element is : %d", s2);

    return 0;
}