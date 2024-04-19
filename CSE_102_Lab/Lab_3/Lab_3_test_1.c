#include<stdio.h>

int main()
{
    printf("Md. Al Imran\n\n");

    int n, m;
    printf("Input number: ");
    scanf("%d", &n);
    printf("Input number: ");
    scanf("%d", &m);
    if(n%5==0 && n%11==0)
    {
        printf("Number is divisible by 5 and 11\n");
    }
    else
    {
        printf("Number is not divisible by 5 and 11\n");
    }
    if(m%5==0 && m%11==0)
    {
        printf("Number is divisible by 5 and 11\n");
    }
    else
    {
        printf("Number is not divisible by 5 and 11\n");
    }
    printf("\nID: 20245103253");
    return 0;
}