#include<stdio.h>
int main ()
{
    int i, n, even = 0, odd = 0;
    printf("No. of elemets: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        a[i] = i + 1;
        if ((a[i] % 2) == 0)
        {
            ++even;
        }
        else
        {
            ++odd;
        }
    }
    printf("Total even numbers: %d and total odd numbers: %d\n", even, odd);
    for (i = 0; i < n; i++)
    {
        if ((a[i] % 2) == 0)
        {
            printf("%d is even\n", a[i]);
        }
        else
        {
            printf("%d is odd\n", a[i]);
        }
    }
    return 0;
}