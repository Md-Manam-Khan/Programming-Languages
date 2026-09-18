#include <stdio.h>
int recursiveGcd(int a, int b);
int main()
{
    int a, b, result;
    printf("Input two numbers: ");
    scanf("%d %d", &a, &b);
    result = recursiveGcd(a, b);
    printf("GCD: %d", result);
    return 0;
}
int recursiveGcd(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    return recursiveGcd(b, a % b);
}
