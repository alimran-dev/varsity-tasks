#include <stdio.h>
int main()
{
    int a, b, sum, sub, mult, div, mod;
    scanf("%d", &a);
    scanf("%d", &b);

    sum = a + b;
    sub = a - b;
    mult = a * b;
    div = a / b;
    mod = a % b;

    printf("Sum: %d\n", sum);
    printf("Sub: %d\n", sub);
    printf("Mult: %d\n", mult);
    printf("Div: %d\n", div);
    printf("Mod: %d\n", mod);
    return 0;
}