#include <stdio.h>
#include <math.h>

int main()
{
    printf("Md. Al Imran\n\n");

    int a, b, c, d;
    printf("Input a: ");
    scanf("%d", &a);
    printf("Input b: ");
    scanf("%d", &b);
    printf("Input c: ");
    scanf("%d", &c);
    d = b * b - 4 * a * c;
    double x, y;
    if (d >= 0)
    {
        x = (-b + sqrt(d * 1.0)) / (2 * a);
        y = (-b - sqrt(d * 1.0)) / (2 * a);
        printf("Root1: %.2lf\n", x);
        printf("Root2: %.2lf\n", y);
    }
    else
    {
        printf("Roots are not real number\n");
    }

    printf("\nID: 20245103253");
    return 0;
}