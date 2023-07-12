#include <stdio.h>
int main()
{
    float day, year;
    printf("enter number of year : ");
    scanf("%f", &year);
    day = (year * 365);
    printf("day is %.2f", day);

    return 0;
}