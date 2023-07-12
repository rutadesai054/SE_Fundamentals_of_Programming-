#include <stdio.h>

int main()
{

    int m, factorial = 1, number;

    printf("Enter a number : ");

    scanf("%d", &number);

    for (m = 1; m <= number; m++)

        factorial = factorial * m;
    {

        printf("Factorial of %d is: %d", number, factorial);
    }
    return 0;
}