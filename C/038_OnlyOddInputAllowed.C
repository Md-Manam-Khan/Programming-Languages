#include<stdio.h>
int main ()
{
    int i, n;
    printf("No. of inputs: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        manam:
        scanf("%d",&a[i]);
        if ((a[i] % 2) == 0)
        {
            printf("Error, only odd inputs allowed, provide an odd number\n");
            goto manam;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}