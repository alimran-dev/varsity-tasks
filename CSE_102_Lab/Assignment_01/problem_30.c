#include <stdio.h>

int main()
{
    printf("Md. Al Imran\n\n");
    int n, m, sum = 0;
    scanf("%d%d", &n, &m);
    int mn, mx;
    if (n > m)
    {
        mx = n;
        mn = m;
    }
    else
    {
        mx = m;
        mn = n;
    }
    for (int i = mn + 1; i <= mx; i++)
    {
        sum += i;
    }
    printf("%d\n", sum);
    printf("\nID: 20245103253");
    return 0;
}