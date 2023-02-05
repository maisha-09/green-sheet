#include <stdio.h>

int main()
{
    double x, y, MEDIA;
    scanf("%lf%lf", &x, &y);

    MEDIA = (3.5 * x + 7.5 * y) / (3.5 + 7.1);

    printf("MEDIA = %lf\n", MEDIA);

    return 0;
}