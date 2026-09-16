#include <stdio.h>
int isPalindrome(char str[]);
int main()
{
    char str[100];
    int palindrome;
    printf("Input a string: ");
    gets(str);
    palindrome = isPalindrome(str);
    if(palindrome == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }
    return 0;
}
int isPalindrome(char str[])
{
    int i, length = 0;
    for(i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    for(i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - 1 - i])
        {
            return 0;
        }
    }
    return 1;
}