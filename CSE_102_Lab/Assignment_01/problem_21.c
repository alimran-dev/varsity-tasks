#include <stdio.h>

int main()
{
    printf("Md. Al Imran\n\n");
    int n, digits = 0;
    scanf("%d", &n);
    while (n)
    {
        n /= 10;
        digits++;
    }
    printf("%d\n", digits);
    printf("\nID: 20245103253");
    return 0;
}