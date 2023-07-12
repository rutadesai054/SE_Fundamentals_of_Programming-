#include <stdio.h>
int main()
{
    // int a,b ;
    float a, b, ans;
    printf("Enter your Width : ");
    scanf("%f", &a);
    printf("Enter your Length : ");
    scanf("%f", &b);
    ans = a * b;
    printf("your ans is %.2f", ans);
    return 0;
}