#include <stdio.h>
#include <string.h>
int main()
{
    int i, words = 0, inWord = 0;
    char manam[200];
    printf("Input a sentence: ");
    fgets(manam, sizeof(manam), stdin);
    for(i = 0; manam[i] != '\0'; i++)
    {
        if(manam[i] != ' ' && manam[i] != '\n' && manam[i] != '\t')
        {
            if(inWord == 0)
            {
                ++words;
                inWord = 1;
            }
        }
        else
        {
            inWord = 0;
        }
    }
    printf("Number of words: %d", words);
    return 0;
}