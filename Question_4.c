#include <stdio.h>
int main()
{
    float radius, area;
    printf("Enter the  radius of a circle\n");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;

    printf("Area of a circle is %.1f and the radius %.1f", radius, area);

    return 0;
}