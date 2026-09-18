#include<stdio.h>
int main ()
{
    int i, n, pallindrome = 0;
    int a[100];
    for (i = 0; i < 100; i++)
    {
        a[i] = i + 1;
        if ((a[i] % 11) == 0)
        {
            ++pallindrome;
        }
    }
    printf("Total number of pallindromes: %d\nThe pallindromes are: \n", pallindrome);
    for (i = 0; i < 100; i++)
    {
        if ((a[i] % 11) == 0)
        {
            printf("%d\n", a[i]);
        }
    }
    return 0;
}