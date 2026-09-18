#include <stdio.h>
int main()
{
    FILE *fp;
    char text[200];
    fp = fopen("manam.txt", "a");
    if(fp == NULL)
    {
        printf("Could not open file");
        return 0;
    }
    printf("Input a line to append: ");
    scanf(" %[^\n]", text);
    fprintf(fp, "\n%s", text);
    fclose(fp);
    printf("Appended successfully");
    return 0;
}
