#include <stdio.h>
struct Book
{
    char title[100];
    char author[50];
    float price;
};
int main()
{
    int n, i;
    printf("Input the number of books: ");
    scanf("%d", &n);
    struct Book khan[n];
    for(i = 0; i < n; i++)
    {
        printf("\nInput title: ");
        scanf("%s", khan[i].title);
        printf("Input author: ");
        scanf("%s", khan[i].author);
        printf("Input price: ");
        scanf("%f", &khan[i].price);
    }
    printf("\nBook records:\n");
    for(i = 0; i < n; i++)
    {
        printf("%s by %s, price %.2f\n", khan[i].title, khan[i].author, khan[i].price);
    }
    return 0;
}
