#include <stdio.h>

int main()
{
    printf("Md. Al Imran\n\n");
    int n, sum = 0;
    scanf("%d", &n);
    int m = n;
    while (m--)
    {
        int x;
        scanf("%d", &x);
        sum += x;
    }
    int avr = sum / n;
    printf("%d\n", avr);
    printf("\nID: 20245103253");
    return 0;
}