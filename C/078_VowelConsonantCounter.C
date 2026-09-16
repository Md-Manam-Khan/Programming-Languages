#include <stdio.h>
#include <string.h>
int main()
{
    int i, vowels = 0, consonants = 0;
    char manam[100];
    printf("Input your name: ");
    fgets(manam, sizeof(manam), stdin);
    printf("\nSo, the name is: ");
    puts(manam);
    printf("And the number of vowels and consonants are: ");
    for(i = 0; manam[i] != '\0'; i++)
    {
        if (((manam[i] >= 'A') && (manam[i] <= 'Z') || (manam[i] >= 'a') && (manam[i] <= 'z')))
        {
            if ((manam[i] == 'A') || (manam[i] == 'E') ||(manam[i] == 'I') || (manam[i] == 'O') ||(manam[i] == 'U') || (manam[i] == 'a') ||(manam[i] == 'e') || (manam[i] == 'i') ||(manam[i] == 'o') || (manam[i] == 'u'))
            {
                ++vowels;
            }
            else
            {
                ++consonants;
            }
        }
    }
    printf("\nVowels: %d\nConsonants: %d", vowels, consonants);
    return 0;
}