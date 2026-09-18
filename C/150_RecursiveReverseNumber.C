#include <stdio.h>
int reverseNumber(int n, int rev);
int main()
{
    int n, result;
    printf("Input a value: ");
    scanf("%d", &n);
    result = reverseNumber(n, 0);
    printf("Reversed number: %d", result);
    return 0;
}
int reverseNumber(int n, int rev)
{
    if(n == 0)
    {
        return rev;
    }
    rev = rev * 10 + n % 10;
    return reverseNumber(n / 10, rev);
}
