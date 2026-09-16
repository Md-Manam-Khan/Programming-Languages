#include <stdio.h>
int main()
{
    char str[100];
    int i, digits = 0;
    printf("Input a string: ");
    gets(str);
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
    }
    printf("Number of digits: %d", digits);
    return 0;
}