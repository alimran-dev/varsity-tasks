#include <stdio.h>

int main()
{
    printf("Md. Al Imran\n\n");
    int n;
    scanf("%d", &n);
    if(n<2)
    {
        printf("Not Prime\n");
        return 0;
    }
    int isPrime = 1;
    for (int i = 2; i <= n/2; i++)
    {
        if(n%i)
            continue;
        isPrime = 0;
        break;
    }
    if(isPrime)
        printf("Prime\n");
    else
        printf("Not Prime\n");
    printf("\nID: 20245103253");
    return 0;
}