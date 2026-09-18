#include <stdio.h>
int main()
{
    FILE *source, *destination;
    char ch;
    source = fopen("manam.txt", "r");
    if(source == NULL)
    {
        printf("Could not open source file");
        return 0;
    }
    destination = fopen("khan.txt", "w");
    if(destination == NULL)
    {
        printf("Could not create destination file");
        fclose(source);
        return 0;
    }
    while((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }
    fclose(source);
    fclose(destination);
    printf("File copied successfully");
    return 0;
}
