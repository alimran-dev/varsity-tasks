#include <stdio.h>

int main()
{
    printf("Md. Al Imran\n\n");
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        int isPrime = 1;
        for (int j = 2; j <= i / 2;j++)
        {
            if(i%j==0)
            {
                isPrime = 0;
                break;
            }
        }
        if(isPrime)
            sum += i;
    }
    printf("%d\n", sum);
    printf("\nID: 20245103253");
    return 0;
}