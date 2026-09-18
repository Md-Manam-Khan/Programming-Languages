#include <stdio.h>
int stringCompare(char a[], char b[]);
int main()
{
    char a[100], b[100];
    int result;
    printf("Input first string: ");
    scanf("%s", a);
    printf("Input second string: ");
    scanf("%s", b);
    result = stringCompare(a, b);
    if(result == 0)
    {
        printf("Strings are equal");
    }
    else
    {
        printf("Strings are not equal");
    }
    return 0;
}
int stringCompare(char a[], char b[])
{
    int i;
    for(i = 0; a[i] != '\0' && b[i] != '\0'; i++)
    {
        if(a[i] != b[i])
        {
            return a[i] - b[i];
        }
    }
    return a[i] - b[i];
}
