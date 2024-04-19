#include <stdio.h>

int main()
{
    printf("Md. Al Imran\n\n");
    int n, result = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    printf("%d\n", result);
    printf("\nID: 20245103253");
    return 0;
}