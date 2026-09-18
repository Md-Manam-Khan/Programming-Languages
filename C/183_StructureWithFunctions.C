#include <stdio.h>
struct Rectangle
{
    float length, width;
};
float area(struct Rectangle r);
int main()
{
    struct Rectangle manam;
    printf("Input length and width: ");
    scanf("%f %f", &manam.length, &manam.width);
    printf("Area: %.2f", area(manam));
    return 0;
}
float area(struct Rectangle r)
{
    return r.length * r.width;
}
