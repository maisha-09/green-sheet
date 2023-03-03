#include <stdio.h>

int main()
{
    long long int A, B, sum = 0;
    scanf("%lld %lld", &A, &B);
    sum = (A + B) * (B - A + 1) / 2;

    printf("%lld\n", sum);
    return 0;
}