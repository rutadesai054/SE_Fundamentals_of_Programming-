#include <stdio.h>
int main()
{
    int j, i;
    for (i = 1; i <= 11; i++)
    {
        for (j = 1; j <= 6; j++)
        {
            if (j <= i && i <= 12 - j)
                printf("* ");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}