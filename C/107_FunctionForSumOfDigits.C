#include <stdio.h>
int sumOfDigits(int n);
int main()
{
    int n, result;
    printf("Input a number: ");
    scanf("%d", &n);
    result = sumOfDigits(n);
    printf("Sum of digits: %d", result);
    return 0;
}
int sumOfDigits(int n)
{
    int sum = 0;
    while(n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}