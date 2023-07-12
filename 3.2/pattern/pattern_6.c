#include <stdio.h>

int main()
{
    int i, j, m;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            m = (char)(j + 64);
            printf("%c ", m);
        }

        printf("\n");
    }
}