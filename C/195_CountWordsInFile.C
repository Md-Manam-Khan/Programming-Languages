#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int count = 0, inWord = 0;
    fp = fopen("manam.txt", "r");
    if(fp == NULL)
    {
        printf("Could not open file");
        return 0;
    }
    while((ch = fgetc(fp)) != EOF)
    {
        if(ch == ' ' || ch == '\n' || ch == '\t')
        {
            inWord = 0;
        }
        else if(inWord == 0)
        {
            inWord = 1;
            count++;
        }
    }
    fclose(fp);
    printf("Word count: %d", count);
    return 0;
}
