#include <stdio.h>
int main()
{
    float a, b, sum, sub, mult, div;
    scanf("%f", &a);
    scanf("%f", &b);

    sum = a + b;
    sub = a - b;
    mult = a * b;
    div = a / b;

    printf("Sum: %f\n", sum);
    printf("Sub: %f\n", sub);
    printf("Mult: %f\n", mult);
    printf("Div: %f\n", div);
    return 0;
}