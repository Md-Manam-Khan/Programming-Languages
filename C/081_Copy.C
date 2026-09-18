#include <stdio.h>
#include <string.h>
int main()
{
    char manam[100], copy[100];
    printf("Input a string: ");
    fgets(manam, sizeof(manam), stdin);
    strcpy(copy, manam);
    printf("Original string: ");
    puts(manam);
    printf("Copied string: ");
    puts(copy);
    return 0;
}