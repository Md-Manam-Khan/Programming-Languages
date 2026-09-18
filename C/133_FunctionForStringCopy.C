#include <stdio.h>
void stringCopy(char source[], char destination[]);
int main()
{
    char source[100], destination[100];
    printf("Input a string: ");
    scanf("%s", source);
    stringCopy(source, destination);
    printf("Copied string: %s", destination);
    return 0;
}
void stringCopy(char source[], char destination[])
{
    int i;
    for(i = 0; source[i] != '\0'; i++)
    {
        destination[i] = source[i];
    }
    destination[i] = '\0';
}
