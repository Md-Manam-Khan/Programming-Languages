#include <stdio.h>
#include <string.h>
int main()
{
    char manam[200], copy[100];
    printf("Input the first string: ");
    fgets(manam, sizeof(manam), stdin);
    printf("Input the second string: ");
    fgets(copy, sizeof(copy), stdin);
    manam[strcspn(manam, "\n")] = '\0';
    copy[strcspn(copy, "\n")] = '\0';
    strcat(manam, copy);
    printf("Concatenated string: ");
    puts(manam);
    return 0;
}