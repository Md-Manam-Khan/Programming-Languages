#include <stdio.h>
int main()
{
    int n, product = 1;
    printf("Input a number: ");
    scanf("%d", &n);
    while(n != 0)
    {
        product = product * (n % 10);
        n = n / 10;
    }
    printf("Product of digits: %d", product);
    return 0;
}