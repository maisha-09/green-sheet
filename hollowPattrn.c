
#include <stdio.h>

int main()
{
    int m, n;
    int N = 7;

    for (n = 1; n <= N; n++)
    {
        printf("#");
    }
    printf("\n");
    for (m = 1; m <= (N - 2); m++)
    {
        printf("#");
        for (n = 1; n <= (N - 2); n++)
        {
            printf(" ");
        }
        printf("#\n");
    }
    for (n = 1; n <= N; n++)
    {
        printf("#");
    }
    printf("\n");
    return 0;
}