#include <stdio.h>
int main()
{
    int num, a = -1, b = 1, ans;
    printf("Enter a number : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        ans = a + b;
        a = b;
        b = ans;
        printf("%d ", ans);
    }

    return 0;
}