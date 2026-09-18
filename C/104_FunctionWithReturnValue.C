#include <stdio.h>
int square(int n);
int main()
{
    int n, result;
    printf("Input a number: ");
    scanf("%d", &n);
    result = square(n);
    printf("Square: %d", result);
    return 0;
}
int square(int n)
{
    return n * n;
}