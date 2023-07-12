#include <stdio.h>
int main()
{
    int num, m, sum = 0;
    printf("enter number: ");
    scanf("%d", &num);
    while (num > 0)
    {
        m = num % 10;
        sum = sum + m;
        num = num / 10;
    }
    printf("summation is %d", sum);
    return 0;
}