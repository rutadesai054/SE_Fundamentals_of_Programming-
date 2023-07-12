#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter number 1 : ");
    scanf("%d", &a);
    printf("Enter number 2 : ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("swap two numbers:\nnumber 1 = %d\nnumber 2 = %d", a, b);

    return 0;
}