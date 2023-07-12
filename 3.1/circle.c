#include <stdio.h>
int main()
{
    int radius;
    float pie = 3.14;
    float area;
    printf("enter radius : ");
    scanf("%d", &radius);
    printf("radius of the circle is %d\n", radius);
    area = (pie * radius * radius);
    printf(" the area of circle is %.2f", area);

    return 0;
}