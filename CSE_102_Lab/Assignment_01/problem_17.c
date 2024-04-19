#include <stdio.h>

int main()
{
    printf("Md. Al Imran\n\n");
    int n, cnt = 0, sum = 0;
    scanf("%d", &n);
    while (n--)
    {
        int x = n + 1;
        if (x % 2)
        {
            cnt++;
            sum += x;
        }
    }
    double avr = sum / cnt;
    printf("%lf\n", avr);
    printf("\nID: 20245103253");
    return 0;
}