#include <stdio.h>

int main()
{
    printf("Md. Al Imran\n\n");
    int n, sum = 0;
    scanf("%d", &n);
    while (n)
    {
        int x = n % 10;
        n /= 10;
        sum += x;
    }
    printf("%d\n", sum);
    printf("\nID: 20245103253");
    return 0;
}