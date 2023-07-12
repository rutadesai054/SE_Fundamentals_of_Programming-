#include <stdio.h>
int main()
{
    int number1, number2, addition, subtraction, multiplication;
    float modulo, division;
    printf("Enter your first number : ");
    scanf("%d", &number1);
    printf("Enter your second number : ");
    scanf("%d", &number2);
    addition = number1 + number2;
    subtraction = number1 - number2;
    multiplication = number1 * number2;
    modulo = number1 % number2;
    division = number1 / number2;
    printf("addition : %d\n", addition);
    printf("subtraction : %d\n", subtraction);
    printf("multiplication : %d\n", multiplication);
    printf("modulo : %.2f\n", modulo);
    printf("division : %.2f\n", division);
    return 0;
}