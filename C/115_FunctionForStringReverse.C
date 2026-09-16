#include <stdio.h>
void reverseString(char str[]);
int main()
{
    char str[100];
    printf("Input a string: ");
    gets(str);
    reverseString(str);
    printf("Reversed string: %s", str);
    return 0;
}
void reverseString(char str[])
{
    int i, length = 0;
    char temp;
    for(i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    for(i = 0; i < length / 2; i++)
    {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}