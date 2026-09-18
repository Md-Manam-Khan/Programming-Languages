#include <stdio.h>
int main()
{
    int n;
    manam:
    printf("This Program prints numbers from 1 to 10 except n!");
    printf("\nInput n: ");
    scanf("%d",&n);
    if ((n > 10) || (n < 1))
    {
        goto manam;
    }
    int i = 1;
    while (i <= 10)
    {
        if (i == n)
        {
            i++;
            continue;
        }
        else
        {
            printf("%d\n", i);
            i++;
        }
    }
    return 0;
}