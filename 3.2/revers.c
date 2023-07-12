#include <stdio.h>
int main()
{
    int number, max, last, new = 0;
    printf("Enter Number: ");
    scanf("%d", &number);
    max = number % 10;
    while (number != 0)
    {
        last = number % 10;
        new = new * 10 + last;
        number = number / 10;
    }
    printf("your reverse Number is %d", new);
    return 0;
}