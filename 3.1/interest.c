#include <stdio.h>
int main()
{
    float rate, principle, year, interest;
    printf("Enter amount : ");
    scanf("%f", &principle);
    printf("Enter rate : ");
    scanf("%f", &rate);
    printf("Enter year : ");
    scanf("%f", &year);
    interest = (principle * rate * year) / 100;
    printf("your interest is %.2f", interest);

    return 0;
}