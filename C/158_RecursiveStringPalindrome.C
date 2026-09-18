#include <stdio.h>
#include <string.h>
int recursiveStringPalindrome(char a[], int start, int end);
int main()
{
    char a[100];
    int result;
    printf("Input a string: ");
    scanf("%s", a);
    result = recursiveStringPalindrome(a, 0, strlen(a) - 1);
    if(result == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a palindrome");
    }
    return 0;
}
int recursiveStringPalindrome(char a[], int start, int end)
{
    if(start >= end)
    {
        return 1;
    }
    if(a[start] != a[end])
    {
        return 0;
    }
    return recursiveStringPalindrome(a, start + 1, end - 1);
}
