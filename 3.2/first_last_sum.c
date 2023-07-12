#include <stdio.h>
int main()
{
    int num, last, sum;
    printf("Enter a number: ");
    scanf("%d", &num);
    last = num % 10;
    while (num > 9)
    {
        num = num / 10;
    }
    sum = num + last;
    printf("first number and last number sum : %d", sum);
    return 0;
}