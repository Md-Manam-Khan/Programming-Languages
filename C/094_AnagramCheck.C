#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    int i, j, length1 = 0, length2 = 0, found, anagram = 1;
    printf("Input first string: ");
    gets(str1);
    printf("Input second string: ");
    gets(str2);
    for(i = 0; str1[i] != '\0'; i++)
    {
        length1++;
    }
    for(i = 0; str2[i] != '\0'; i++)
    {
        length2++;
    }
    if(length1 != length2)
    {
        anagram = 0;
    }
    else
    {
        for(i = 0; str1[i] != '\0'; i++)
        {
            found = 0;
            for(j = 0; str2[j] != '\0'; j++)
            {
                if(str1[i] == str2[j])
                {
                    str2[j] = '*';
                    found = 1;
                    break;
                }
            }
            if(found == 0)
            {
                anagram = 0;
                break;
            }
        }
    }
    if(anagram == 1)
    {
        printf("Anagram");
    }
    else
    {
        printf("Not anagram");
    }
    return 0;
}