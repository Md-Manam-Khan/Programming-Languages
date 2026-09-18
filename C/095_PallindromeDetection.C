#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int i, length = 0;
    bool palindrome = true;
    char manam[100];
    printf("Input a string: ");
    fgets(manam, sizeof(manam), stdin);
    for(i = 0; manam[i] != '\0'; i++)
    {
        if(manam[i] == '\n')
        {
            break;
        }
        ++length;
    }
    for(i = 0; i < length / 2; i++)
    {
        if(manam[i] != manam[length - 1 - i])
        {
            palindrome = false;
            break;
        }
    }
    if(palindrome)
    {
        printf("The string is a palindrome");
    }
    else
    {
        printf("The string is not a palindrome");
    }
    return 0;
}