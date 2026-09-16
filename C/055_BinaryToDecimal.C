#include <stdio.h>
int main()
{
    int n, decimal = 0, place = 1, digit;
    printf("Input a binary number: ");
    scanf("%d", &n);
    while(n != 0)
    {
        digit = n % 10;
        decimal = decimal + digit * place;
        place = place * 2;
        n = n / 10;
    }
    printf("Decimal: %d", decimal);
    return 0;
}