#include <stdio.h>

int main()
{
    printf("Md. Al Imran\n\n");
    int a, b, result = 1;
    scanf("%d %d", &a, &b);
    while (b--)
    {
        result *= a;
    }
    printf("%d\n", result);
    printf("\nID: 20245103253");
    return 0;
}