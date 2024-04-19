#include <stdio.h>

int main()
{
    printf("Md. Al Imran\n\n");
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int x = i * i;
        sum += x;
    }
    printf("%d\n", sum);
    printf("\nID: 20245103253");
    return 0;
}