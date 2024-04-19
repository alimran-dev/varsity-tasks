#include<stdio.h>

int main()
{
    printf("Md. Al Imran\n\n");

    int c;

    printf("Enter length in centimeter = ");
    scanf("%d", &c);
    double m, k;
    m = c / 100.0;
    k = c / 100000.0;
    printf("Length in meter: %lf m\n", m);
    printf("Length in kilometer: %lf km\n", k);

    printf("\nID: 20245103253\n");
    return 0;
}