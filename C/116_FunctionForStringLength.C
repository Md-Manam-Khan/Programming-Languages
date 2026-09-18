#include <stdio.h>
int stringLength(char str[]);
int main()
{
    char str[100];
    int length;
    printf("Input a string: ");
    gets(str);
    length = stringLength(str);
    printf("Length: %d", length);
    return 0;
}
int stringLength(char str[])
{
    int i, length = 0;
    for(i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}