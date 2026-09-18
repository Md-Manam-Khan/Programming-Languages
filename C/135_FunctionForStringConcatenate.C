#include <stdio.h>
void stringConcatenate(char a[], char b[]);
int main()
{
    char a[200], b[100];
    printf("Input first string: ");
    scanf("%s", a);
    printf("Input second string: ");
    scanf("%s", b);
    stringConcatenate(a, b);
    printf("Concatenated string: %s", a);
    return 0;
}
void stringConcatenate(char a[], char b[])
{
    int i, j, len = 0;
    for(i = 0; a[i] != '\0'; i++)
    {
        len++;
    }
    for(j = 0; b[j] != '\0'; j++)
    {
        a[len + j] = b[j];
    }
    a[len + j] = '\0';
}
