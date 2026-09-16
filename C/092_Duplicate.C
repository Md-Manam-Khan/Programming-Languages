#include <stdio.h>
#include <string.h>
int main()
{
    int i, freq[256] = {0};
    char manam[100];
    printf("Input a string: ");
    fgets(manam, sizeof(manam), stdin);
    for(i = 0; manam[i] != '\0'; i++)
    {
        if(manam[i] != '\n')
        {
            ++freq[(unsigned char)manam[i]];
        }
    }
    printf("Duplicate characters: ");
    for(i = 0; i < 256; i++)
    {
        if(freq[i] > 1)
        {
            printf("%c ", i);
        }
    }
    return 0;
}