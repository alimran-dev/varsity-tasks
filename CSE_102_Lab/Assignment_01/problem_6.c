#include <stdio.h>

int main()
{
    printf("Md. Al Imran\n\n");
    int n;
    scanf("%d", &n);
    int sum = 0;
    while (n--)
    {
        if((n+1)%2==0)
            sum += n + 1;
    }
    printf("%d\n", sum);
    printf("\nID: 20245103253");
    return 0;
}