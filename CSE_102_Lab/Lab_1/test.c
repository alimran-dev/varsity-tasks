#include<stdio.h>

int main()
{
    double kgI;
    scanf("%lf", &kgI);
    int kg = kgI / 1;
    double gr = (kgI - kg) * 1000;
    int gram = gr / 1;
    printf("%d %.0lf", kg, gr);
    return 0;
}