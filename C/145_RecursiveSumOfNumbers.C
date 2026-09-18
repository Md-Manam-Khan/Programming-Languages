#include <stdio.h>
int sumOfNumbers(int n);
int main()
{
    int n, result;
    printf("Input a value: ");
    scanf("%d", &n);
    result = sumOfNumbers(n);
    printf("Sum: %d", result);
    return 0;
}
int sumOfNumbers(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return n + sumOfNumbers(n - 1);
}
