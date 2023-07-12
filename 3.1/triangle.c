#include <stdio.h>
int main()
{
    float b, h, area;
    printf(" enter your base :");
    scanf("%f", &b);
    printf(" enter your height :");
    scanf("%f", &h);
    area = (b * h) / 2;
    printf("the area of tringle is %.2f", area);

    return 0;
}