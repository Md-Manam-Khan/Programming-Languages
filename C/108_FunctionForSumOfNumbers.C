#include <stdio.h>
int sum(int n);
int main()
{
    int n, result;
    printf("Input a number: ");
    scanf("%d", &n);
    result = sum(n);
    printf("Sum: %d", result);
    return 0;
}
int sum(int n)
{
    int i, total = 0;
    for(i = 1; i <= n; i++)
    {
        total = total + i;
    }
    return total;
}