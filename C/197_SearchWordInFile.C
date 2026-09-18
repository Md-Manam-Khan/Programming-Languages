#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    char word[100], line[500];
    int found = 0;
    fp = fopen("manam.txt", "r");
    if(fp == NULL)
    {
        printf("Could not open file");
        return 0;
    }
    printf("Input the word to search: ");
    scanf("%s", word);
    while(fgets(line, 500, fp) != NULL)
    {
        if(strstr(line, word) != NULL)
        {
            found = 1;
            break;
        }
    }
    fclose(fp);
    if(found)
    {
        printf("Word found in file");
    }
    else
    {
        printf("Word not found in file");
    }
    return 0;
}
