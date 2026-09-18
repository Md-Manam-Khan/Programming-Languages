#include <stdio.h>
#include <string.h>
int isAnagram(char a[], char b[]);
int main()
{
    char a[100], b[100];
    int result;
    printf("Input first string: ");
    scanf("%s", a);
    printf("Input second string: ");
    scanf("%s", b);
    result = isAnagram(a, b);
    if(result == 1)
    {
        printf("The strings are anagrams");
    }
    else
    {
        printf("The strings are not anagrams");
    }
    return 0;
}
int isAnagram(char a[], char b[])
{
    int count[256] = {0};
    int i;
    if(strlen(a) != strlen(b))
    {
        return 0;
    }
    for(i = 0; a[i] != '\0'; i++)
    {
        count[(int)a[i]]++;
    }
    for(i = 0; b[i] != '\0'; i++)
    {
        count[(int)b[i]]--;
    }
    for(i = 0; i < 256; i++)
    {
        if(count[i] != 0)
        {
            return 0;
        }
    }
    return 1;
}
