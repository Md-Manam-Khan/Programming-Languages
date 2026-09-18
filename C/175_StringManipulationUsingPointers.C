#include <stdio.h>
int stringLengthUsingPointer(char *a);
int main()
{
    char a[100];
    int result;
    printf("Input a string: ");
    scanf("%s", a);
    result = stringLengthUsingPointer(a);
    printf("Length: %d", result);
    return 0;
}
int stringLengthUsingPointer(char *a)
{
    int count = 0;
    while(*a != '\0')
    {
        count++;
        a++;
    }
    return count;
}
