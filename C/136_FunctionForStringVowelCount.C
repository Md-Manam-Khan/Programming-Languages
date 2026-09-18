#include <stdio.h>
int stringVowelCount(char a[]);
int main()
{
    char a[100];
    int result;
    printf("Input a string: ");
    scanf("%s", a);
    result = stringVowelCount(a);
    printf("Vowel count: %d", result);
    return 0;
}
int stringVowelCount(char a[])
{
    int i, count = 0;
    for(i = 0; a[i] != '\0'; i++)
    {
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ||
           a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
        {
            count++;
        }
    }
    return count;
}
