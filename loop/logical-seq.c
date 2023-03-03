#include <stdio.h>

int main()
{
    int N, i, n2, n3, pn2, pn3;
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {

        printf("%d %d %d\n", i, i * i, i * i * i);
        printf("%d %d %d\n", i, i * i + 1, i * i * i + 1);
    }
    return 0;
}