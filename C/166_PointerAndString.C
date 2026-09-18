#include <stdio.h>
int main()
{
    char a[100];
    char *p;
    printf("Input a string: ");
    scanf("%s", a);
    p = a;
    printf("String using pointer: ");
    while(*p != '\0')
    {
        printf("%c", *p);
        p++;
    }
    return 0;
}
