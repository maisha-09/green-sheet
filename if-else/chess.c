#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);

    if ((x + y) % 2 == 0)
    {
        printf("%d\n", 1);
    }
    else
    {
        printf("%d\n", 0);
    }

    return 0;
}