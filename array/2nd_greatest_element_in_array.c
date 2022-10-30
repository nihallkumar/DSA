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

    int g1, g2;

    g1 = arr[0];
    if (arr[1] > g1)
    {
        g2 = g1;
        g1 = arr[1];
    }
    else
    {
        g2 = arr[1];
    }

    for (i = 2; i < n; i++)
    {
        if (arr[i] > g1)
        {
            g2 = g1;
            g1 = arr[i];
        }
    }

    printf("2nd greatest element is : %d", g2);

    return 0;
}