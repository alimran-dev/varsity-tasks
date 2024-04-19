#include <stdio.h>

int main()
{
    printf("Md. Al Imran\n\n");
    int n, result = 0;
    scanf("%d", &n);
    while (n)
    {
        int x = n % 10;
        result = result * 10 + x;
        n /= 10;
    }
    printf("%d\n", result);
    printf("\nID: 20245103253");
    return 0;
}