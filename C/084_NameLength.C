#include <stdio.h>
#include <string.h>
int main()
{
    int i, j = 0;
    char manam[100];
    printf("Input your name: ");
    fgets(manam, sizeof(manam), stdin);
    printf("\nSo, the name is: ");
    puts(manam);
    printf("And the name length is: ");
    for(i = 0; manam[i] != '\0'; i++)
    {
        ++j;
    }
    printf("%d", j);
    return 0;
}