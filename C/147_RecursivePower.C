#include <stdio.h>
long long power(int base, int exponent);
int main()
{
    int base, exponent;
    long long result;
    printf("Input base and exponent: ");
    scanf("%d %d", &base, &exponent);
    result = power(base, exponent);
    printf("Result: %lld", result);
    return 0;
}
long long power(int base, int exponent)
{
    if(exponent == 0)
    {
        return 1;
    }
    return base * power(base, exponent - 1);
}
