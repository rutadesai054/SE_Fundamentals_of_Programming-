#include <stdio.h>
int main()
{
    float day, year;
    printf("enter number of day : ");
    scanf("%f", &day);
    year = (day / 365);
    printf("year is %.2f", year);

    return 0;
}