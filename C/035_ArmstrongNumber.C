#include <stdio.h>
int main()
{
    int n, original, digit, sum = 0, digits = 0, i, power;
    printf("Input a number: ");
    scanf("%d", &n);
    original = n;
    if(n == 0)
    {
        digits = 1;
    }
    else
    {
        while(n != 0)
        {
            n = n / 10;
            digits++;
        }
    }
    n = original;
    while(n != 0)
    {
        digit = n % 10;
        power = 1;
        for(i = 0; i < digits; i++)
        {
            power = power * digit;
        }
        sum = sum + power;
        n = n / 10;
    }
    if(sum == original)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not an Armstrong number");
    }
    return 0;
}