#include<stdio.h>
int main ()
{
    int n, i, big, small;
    printf("Array element no: ");
    scanf("%d", &n);
    int manam[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &manam[i]);
    }
    printf("\nThe Array elements are: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", manam[i]);
    }
    big = manam[0];
    for (i = 0; i < n; i++)
    {
        if (big <= manam[i])
        {
            big = manam[i];
        }
    }
    small = manam[0];
    for (i = 0; i < n; i++)
    {
        if (small >= manam[i])
        {
            small = manam[i];
        }
    }
    printf("\nThe biggest number is: %d\nAnd The smallest number is: %d", big, small);
}