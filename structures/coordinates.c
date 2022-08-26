#include <stdio.h>
#include <math.h>

struct point
{
    int x, y;
};
typedef struct point Point;

int main()
{
    Point p1, p2;
    double sqrd_distance;
    double distance;
    printf("Enter first point: ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("Enter second point: ");
    scanf("%d %d", &p2.x, &p2.y);
    sqrd_distance = pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2);
    distance = sqrt(sqrd_distance);

    printf("Distance = %.3f\n", distance);
    return 0;
}