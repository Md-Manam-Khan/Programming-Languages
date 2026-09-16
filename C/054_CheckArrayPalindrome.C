#include <stdio.h>
int main()
{
    int n, i, palindrome = 1;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Input the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n / 2; i++)
    {
        if(a[i] != a[n - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }
    if(palindrome == 1)
    {
        printf("Palindrome array");
    }
    else
    {
        printf("Not a palindrome array");
    }
    return 0;
}