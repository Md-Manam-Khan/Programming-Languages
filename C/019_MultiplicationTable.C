#include <stdio.h>
int main()
{
    int i, n, m;
    printf("Multiplication table of: ");
    scanf("%d",&n);
    i = 1;
    manam:
    m = n * i;
    printf("%d * %d = %d\n", n, i, m);
    i++;
    if (i <= 10)
    {
        goto manam;
    }
    return 0;
}