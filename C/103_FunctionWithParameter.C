#include <stdio.h>
void greet(char name[]);
int main()
{
    greet("Manam");

    return 0;
}
void greet(char name[])
{
    printf("Hello, %s!", name);
}