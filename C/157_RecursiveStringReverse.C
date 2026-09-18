#include <stdio.h>
#include <string.h>
void recursiveStringReverse(char a[], int start, int end);
int main()
{
    char a[100];
    printf("Input a string: ");
    scanf("%s", a);
    recursiveStringReverse(a, 0, strlen(a) - 1);
    printf("Reversed string: %s", a);
    return 0;
}
void recursiveStringReverse(char a[], int start, int end)
{
    char temp;
    if(start >= end)
    {
        return;
    }
    temp = a[start];
    a[start] = a[end];
    a[end] = temp;
    recursiveStringReverse(a, start + 1, end - 1);
}
