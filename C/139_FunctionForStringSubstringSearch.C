#include <stdio.h>
#include <string.h>
int substringSearch(char a[], char b[]);
int main()
{
    char a[200], b[100];
    int result;
    printf("Input the main string: ");
    scanf("%s", a);
    printf("Input the substring to search: ");
    scanf("%s", b);
    result = substringSearch(a, b);
    if(result != -1)
    {
        printf("Substring found at index %d", result);
    }
    else
    {
        printf("Substring not found");
    }
    return 0;
}
int substringSearch(char a[], char b[])
{
    int i, j, lenA = strlen(a), lenB = strlen(b);
    for(i = 0; i <= lenA - lenB; i++)
    {
        for(j = 0; j < lenB; j++)
        {
            if(a[i + j] != b[j])
            {
                break;
            }
        }
        if(j == lenB)
        {
            return i;
        }
    }
    return -1;
}
