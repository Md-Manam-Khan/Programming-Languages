#include<stdio.h>
int main ()
{
    int i, n, j, divisible, prime;
    printf("No. of elements: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nThe numbers are: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\n");
    prime = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] <= 1)
        {
            printf("%d is not a prime number\n", a[i]);
            continue;
        }
        divisible = 0;
        for (j = 2; j < a[i]; j++)
        {
            if ((a[i] % j) == 0)
            {
                divisible++;
            }
        }
        if (divisible == 0)
        {
            printf("%d is a prime number\n", a[i]);
            ++prime;
        }
        else
        {
            printf("%d is not a prime number\n", a[i]);
        }
    }
    printf("\nTotal count of prime numbers: %d", prime);
    return 0;
}