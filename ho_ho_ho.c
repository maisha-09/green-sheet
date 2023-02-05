#include <stdio.h>
int main()
{
    int N, i;

    scanf("%d", &N);

    for (i = 1; i <= N - 1; i++)
    {
        printf("Ho ", i);
    }
    printf("Ho!\n");
    return 0;
}