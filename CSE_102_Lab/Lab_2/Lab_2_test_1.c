#include<stdio.h>

int main()
{
    printf("Md. Al Imran\n\n"); 

    int a, b;

    printf("First Number: ");
    scanf("%d", &a);

    printf("Second Number: ");
    scanf("%d", &b);

    int sum, diff, prod, quo, mod;

    sum = a + b;
    diff = a - b;
    prod = a * b;
    quo = a / b;
    mod = a % b;

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", prod);
    printf("Quotient = %d\n", quo);
    printf("Modulus = %d\n", mod);

    printf("\nID: 20245103253\n");
    return 0;
}