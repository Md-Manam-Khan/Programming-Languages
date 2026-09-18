#include <stdio.h>
int main()
{
    char str[100];
    int i, special = 0;
    printf("Input a string: ");
    gets(str);
    for(i = 0; str[i] != '\0'; i++)
    {
        if(!(((str[i] >= 'A') && (str[i] <= 'Z')) || ((str[i] >= 'a') && (str[i] <= 'z')) || ((str[i] >= '0') && (str[i] <= '9')) || (str[i] == ' ')))
        {
            special++;
        }
    }
    printf("Number of special characters: %d", special);
    return 0;
}