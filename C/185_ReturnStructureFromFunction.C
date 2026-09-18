#include <stdio.h>
struct Point
{
    int x, y;
};
struct Point makePoint(int x, int y);
int main()
{
    int x, y;
    struct Point manam;
    printf("Input x and y: ");
    scanf("%d %d", &x, &y);
    manam = makePoint(x, y);
    printf("Point: (%d, %d)", manam.x, manam.y);
    return 0;
}
struct Point makePoint(int x, int y)
{
    struct Point p;
    p.x = x;
    p.y = y;
    return p;
}
