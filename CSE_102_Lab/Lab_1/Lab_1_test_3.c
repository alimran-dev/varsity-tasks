#include <stdio.h>
int main()
{
    long long int a, b, sum, sub, mult, div, mod;
    scanf("%lld", &a);
    scanf("%lld", &b);

    sum = a + b;
    sub = a - b;
    mult = a * b;
    div = a / b;
    mod = a % b;

    printf("Sum: %lld\n", sum);
    printf("Sub: %lld\n", sub);
    printf("Mult: %lld\n", mult);
    printf("Div: %lld\n", div);
    printf("Mod: %lld\n", mod);
    return 0;
}