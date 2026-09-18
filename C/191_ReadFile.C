#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("manam.txt", "r");
    if(fp == NULL)
    {
        printf("Could not open file");
        return 0;
    }
    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);
    return 0;
}
