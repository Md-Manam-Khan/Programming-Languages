#include <stdio.h>
int main()
{
    FILE *fp;
    char text[200];
    fp = fopen("manam.txt", "w");
    if(fp == NULL)
    {
        printf("Could not create file");
        return 0;
    }
    printf("Input a line of text: ");
    scanf(" %[^\n]", text);
    fprintf(fp, "%s", text);
    fclose(fp);
    printf("File written successfully");
    return 0;
}
