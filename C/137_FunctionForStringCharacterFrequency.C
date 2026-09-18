#include <stdio.h>
int stringCharacterFrequency(char a[], char ch);
int main()
{
    char a[100], ch;
    int result;
    printf("Input a string: ");
    scanf("%s", a);
    printf("Input the character to find: ");
    scanf(" %c", &ch);
    result = stringCharacterFrequency(a, ch);
    printf("Frequency of %c: %d", ch, result);
    return 0;
}
int stringCharacterFrequency(char a[], char ch)
{
    int i, count = 0;
    for(i = 0; a[i] != '\0'; i++)
    {
        if(a[i] == ch)
        {
            count++;
        }
    }
    return count;
}
