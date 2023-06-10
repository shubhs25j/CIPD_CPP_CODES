#include <stdio.h>
#include <math.h>
int main()
{
    float x1, y1, x2, y2;
    float r;
    printf("enter the co-ordinates of center of circul:\n");
    scanf("%f%f", &x1, &y1);
    printf("Enter the point co-ordinates\n");
    scanf("%f%f", &x2, &y2);
    printf("Enter the radius of circule\n");
    scanf("%f", &r);

    float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    if (r == distance)
        printf("The point is lie in the circufarance of circule");
    else if (r < distance)
        printf("The point is lie outside the circule");
    else if (r > distance)
        printf("The point is lie inside the circule");

    // d=√((x2 – x1)² + (y2 – y1)²)
}