#include <stdio.h>
int main()
{
    long int a, b, sum, sub, mult, div, mod;
    scanf("%ld", &a);
    scanf("%ld", &b);

    sum = a + b;
    sub = a - b;
    mult = a * b;
    div = a / b;
    mod = a % b;

    printf("Sum: %ld\n", sum);
    printf("Sub: %ld\n", sub);
    printf("Mult: %ld\n", mult);
    printf("Div: %ld\n", div);
    printf("Mod: %ld\n", mod);
    return 0;
}