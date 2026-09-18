#include<stdio.h>
int main ()
{
    char cha;
    printf("Input a character: ");
    scanf("%c",&cha);
    if (((cha >= 'a') && (cha <= 'z')) || ((cha >= 'A') && (cha <= 'Z')))
    {
        printf("Character is an alphabet");
    }
    else
    {
        printf("Char is not an alphabet");
    }
    return 0;
}