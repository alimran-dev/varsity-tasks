#include <stdio.h>

int main()
{
    printf("Md. Al Imran\n\n");
    int n, x;
    scanf("%d%d", &n, &x);
    for (int i = 1; i <= n; i++)
    {
        printf("%d x %d = %d\n", x, i, x * i);
    }
    printf("\nID: 20245103253");
    return 0;
}