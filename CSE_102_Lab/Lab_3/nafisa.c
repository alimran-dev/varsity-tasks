#include<stdio.h>
#include<math.h>
int main()
{
    printf("Name:Nafisa Iffat\n");

    int a,b,c;
    float Root1,Root2;
    printf("\nEnter value of a: ");
    scanf("%d", &a);
    printf("\nEnter value of b: ");
    scanf("%d", &b);
    printf("\nEnter value of c: ");
    scanf("%d", &c);

    Root1=(-b+(sqrt(powf(b,2)-4*a*c)))/ (2*a);
    Root2=(-b-(sqrt(powf(b,2)-4*a*c)))/ (2*a);

    printf("\nRoots  of quadratic equation are");
    printf("\n%.2f %.2f",Root1,Root2);


    printf("\nID:20245103256\n");

    return 0;

}