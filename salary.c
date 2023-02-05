#include <stdio.h>

int main()
{
    int NUMBER, SALARY;
    float hours;

    scanf("%d%d%f", &NUMBER, &SALARY, &hours);
    printf("NUMBER = %d\n", NUMBER);

    printf("SALARY = U$ %.2f\n", SALARY * hours);

    return 0;
}