#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, s;
    scanf("%lf %lf %lf", &a, &b, &c);

    if (((b * b) - 4 * a * c) < 0 || a == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        s = sqrt((b * b) - 4 * a * c);
        printf("R1 = %.5lf\n", ((-b + s) / (2 * a)));
        printf("R2 = %.5lf\n", ((-b - s) / (2 * a)));
    }
    return 0;
}