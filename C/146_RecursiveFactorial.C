#include <stdio.h>
long long factorial(int n);
int main()
{
    int n;
    long long result;
    printf("Input a value: ");
    scanf("%d", &n);
    result = factorial(n);
    printf("Factorial: %lld", result);
    return 0;
}
long long factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
