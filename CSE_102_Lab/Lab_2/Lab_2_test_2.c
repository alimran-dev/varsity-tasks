#include<stdio.h>

int main()
{
    printf("Md. Al Imran\n\n");

    int p, t;
    double r, result;

    printf("Enter principle: ");
    scanf("%d", &p);

    printf("Enter time: ");
    scanf("%d", &t);

    printf("Enter rate: ");
    scanf("%lf", &r);

    result = (p * t * r) / 100;

    printf("Simple Interest: %lf\n",result);

    printf("\nID: 20245103253\n");
    return 0;
}