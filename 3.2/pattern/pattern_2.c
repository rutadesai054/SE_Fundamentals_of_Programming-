#include <stdio.h>

int main()
{
    int i, j, n, k;
    for (i = 1; i <= 5; i++)
    {
        k = i;
        for (j = 1; j <= i; j++)
        {
            n = (char)(k + 64);
            printf("%c ", n);
            k++;
        }

        printf(" \n");
    }
}