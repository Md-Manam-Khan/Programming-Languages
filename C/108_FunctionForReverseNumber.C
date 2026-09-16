#include <stdio.h>
int reverseNumber(int n);
int main()
{
    int n, result;
    printf("Input a number: ");
    scanf("%d", &n);
    result = reverseNumber(n);
    printf("Reverse: %d", result);
    return 0;
}
int reverseNumber(int n)
{
    int reverse = 0;
    while(n != 0)
    {
        reverse = reverse * 10 + n % 10;
        n = n / 10;
    }
    return reverse;
}