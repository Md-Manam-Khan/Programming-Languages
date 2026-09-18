#include <stdio.h>
void recursiveDecimalToBinary(int n);
int main()
{
    int n;
    printf("Input a decimal value: ");
    scanf("%d", &n);
    printf("Binary: ");
    recursiveDecimalToBinary(n);
    return 0;
}
void recursiveDecimalToBinary(int n)
{
    if(n == 0)
    {
        return;
    }
    recursiveDecimalToBinary(n / 2);
    printf("%d", n % 2);
}
