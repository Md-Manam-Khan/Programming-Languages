#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;
    printf("Input the length of string: ");
    scanf("%d", &n);
    char *a = (char*)malloc((n + 1) * sizeof(char));
    printf("Input the string: ");
    scanf("%s", a);
    printf("String: %s\n", a);
    printf("Characters: ");
    for(i = 0; a[i] != '\0'; i++)
    {
        printf("%c ", a[i]);
    }
    free(a);
    return 0;
}
