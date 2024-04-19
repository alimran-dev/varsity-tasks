#include <stdio.h>

int main()
{
    printf("Md. Al Imran\n\n");
    int n, sum = 0;
    scanf("%d", &n);
    int x = n;
    while (x)
    {
        int r = x % 10;
        x /= 10;
        int y = r * r * r;
        sum += y;
    }
    if(n==sum)
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong Number\n");
    printf("\nID: 20245103253");
    return 0;
}