#include <stdio.h>
int main()
{
    double a, b, sum, sub, mult, div, mod;
    scanf("%lf", &a);
    scanf("%lf", &b);

    sum = a + b;
    sub = a - b;
    mult = a * b;
    div = a / b;

    printf("Sum: %lf\n", sum);
    printf("Sub: %lf\n", sub);
    printf("Mult: %lf\n", mult);
    printf("Div: %lf\n", div);
    return 0;
}