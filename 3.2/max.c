#include <stdio.h>
int main()
{
    int num, max, last;
    printf("Enter Number: ");
    scanf("%d", &num);
    max = num % 10;
    while (num != 0)
    {
        last = num % 10;
        if (last > max)
        {
            max = last;
        }
        num = num / 10;
    }
    printf("Maximum Number is %d", max);
    return 0;
}