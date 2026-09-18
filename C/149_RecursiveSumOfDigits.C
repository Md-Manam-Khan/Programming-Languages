#include <stdio.h>
int sumOfDigits(int n);
int main()
{
    int n, result;
    printf("Input a value: ");
    scanf("%d", &n);
    result = sumOfDigits(n);
    printf("Sum of digits: %d", result);
    return 0;
}
int sumOfDigits(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return (n % 10) + sumOfDigits(n / 10);
}
