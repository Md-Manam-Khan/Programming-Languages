#include <stdio.h>
int main()
{
    char str[100], old, new;
    int i;
    printf("Input a string: ");
    gets(str);
    printf("Input the character to replace: ");
    scanf("%c", &old);
    printf("Input the new character: ");
    scanf(" %c", &new);
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == old)
        {
            str[i] = new;
        }
    }
    printf("Updated string: %s", str);
    return 0;
}