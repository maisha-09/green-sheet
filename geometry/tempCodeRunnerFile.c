#include <stdio.h>

int main()
{
    float A, B, C, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;
    scanf("%f %f %f", &A, &B, &C);
    TRIANGULO = .5 * A * C;
    CIRCULO = 3.1416 * C * C;
    TRAPEZIO = (A + B / 2) * C;
    QUADRADO = B * B;
    RETANGULO = A * B;

    printf("TRIANGULO: %.3f\n", TRIANGULO);
    printf("CIRCULO: %.3f\n", CIRCULO);
    printf("TRAPEZIO: %.3f\n", TRAPEZIO);
    printf("QUADRADO: %.3f\n", QUADRADO);
    printf("RETANGULO: %.3f\n", RETANGULO);
    return 0;
}