#include <stdio.h>
int main ()
{
    int a;
    printf("Input the value of a: ");
    scanf("%d", &a);
    if (a == 0)
    {
        printf("%d is equal to zero", a);
    }
    else if (a > 0)
    {
        printf("%d is positive, greater than zero", a);
    }
    else
    {
        printf("%d is negative, lesser than zero", a);
    }
    return 0;
}
