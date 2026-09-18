#include <stdio.h>
int main()
{
    FILE *fp;
    char ch, target;
    int count = 0;
    fp = fopen("manam.txt", "r");
    if(fp == NULL)
    {
        printf("Could not open file");
        return 0;
    }
    printf("Input the character to search: ");
    scanf(" %c", &target);
    while((ch = fgetc(fp)) != EOF)
    {
        if(ch == target)
        {
            count++;
        }
    }
    fclose(fp);
    printf("Occurrences: %d", count);
    return 0;
}
