#include<stdio.h>

int main()
{
    printf("Md. Al Imran\n\n");

    int c,f;
    printf("Enter temperature in Celsius = ");
    scanf("%d", &c);

    double k;
    f = c * 9 / 5 + 32;
    k = c + 273.15;

    printf("Temperature in Fahrenheit = %d F\n", f);
    printf("Temperature in Kelvin = %lf K\n", k);

    printf("\nID: 20245103253\n");
    return 0;
}