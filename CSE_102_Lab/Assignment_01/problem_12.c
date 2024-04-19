#include <stdio.h>

int main()
{
    printf("Md. Al Imran\n\n");
    int n, sum = 0;
    scanf("%d", &n);
    while (n--)
    {
        if(n%3==0 || n%5==0)
            sum += n;
    }
    printf("%d\n", sum);
    printf("\nID: 20245103253");
    return 0;
}