#include <stdio.h>
int main()
{
    char str[100], remove;
    int i, j;
    printf("Input a string: ");
    gets(str);
    printf("Input the character to remove: ");
    scanf("%c", &remove);
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == remove)
        {
            for(j = i; str[j] != '\0'; j++)
            {
                str[j] = str[j + 1];
            }
            i--;
        }
    }
    printf("Updated string: %s", str);
    return 0;
}