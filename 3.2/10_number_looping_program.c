#include <stdio.h>
int main()
{
    int number, sum_even = 0, sum_odd = 0;
    for (int i = 1; i <= 10; i++)

    {
        printf("\nEnter number :");
        scanf("%d", &number);
        if (number % 2 == 0)
        {
            printf("%d is Even number", number);
        }
        else
        {
            printf("%d is odd number", number);
        }

        if (number % 2 == 0)
        {
            sum_even = sum_even + number;
        }
        else
        {
            sum_odd = sum_odd + number;
        }
    }
    printf("\nsum of even number=%d\nsum of odd number=%d", sum_even, sum_odd);
    return 0;
}