#include <stdio.h>
int main()
{
    int even, odd, n, i;
    printf("This program counts the number of odds and evens in between 1 to n!");
    printf("\nInput n: ");
    scanf("%d",&n);
    even = 0;
    odd = 0;
    for (i = 1; i <= n; i++)
    {
        if ((i % 2) == 1)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }
    printf("Number of evens: %d\n", even);
    printf("Number of odds: %d\n", odd);
    return 0;
}