#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int count = 0;
    fp = fopen("manam.txt", "r");
    if(fp == NULL)
    {
        printf("Could not open file");
        return 0;
    }
    while((ch = fgetc(fp)) != EOF)
    {
        if(ch == '\n')
        {
            count++;
        }
    }
    fclose(fp);
    printf("Line count: %d", count + 1);
    return 0;
}
