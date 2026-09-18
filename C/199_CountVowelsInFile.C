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
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            count++;
        }
    }
    fclose(fp);
    printf("Vowel count: %d", count);
    return 0;
}
