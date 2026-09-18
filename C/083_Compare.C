#include <stdio.h>
#include <string.h>
int main()
{
    char manam[100], copy[100];
    printf("Input the first string: ");
    fgets(manam, sizeof(manam), stdin);
    printf("Input the second string: ");
    fgets(copy, sizeof(copy), stdin);
    if(strcmp(manam, copy) == 0)
    {
        printf("Both strings are equal");
    }
    else
    {
        printf("The strings are not equal");
    }
    return 0;
}