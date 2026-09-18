#include <stdio.h>
#include <string.h>
int main()
{
    int i, length = 0;
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
    printf("\nReversed string: ");
    for(i = length - 1; i >= 0; i--)
    {
        printf("%c", manam[i]);
    }
    return 0;
}