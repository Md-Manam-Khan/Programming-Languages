#include <stdio.h>
#include <string.h>
int main()
{
    int i, freq[256] = {0}, max = 0, min = 1000, most, least;
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
    for(i = 0; i < 256; i++)
    {
        if(freq[i] > max)
        {
            max = freq[i];
            most = i;
        }
        if(freq[i] > 0 && freq[i] < min)
        {
            min = freq[i];
            least = i;
        }
    }
    printf("Most frequent character: %c (%d times)\n", most, max);
    printf("Least frequent character: %c (%d times)", least, min);
    return 0;
}