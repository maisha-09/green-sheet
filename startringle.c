#include <stdio.h>

int main()
{
    int m, n;

    for (m = 1; m <= 5; m++)
    {
        for (n = 1; n <= m; n++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}