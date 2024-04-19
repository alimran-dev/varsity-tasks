#include <stdio.h>

int fact(int n)
{
    if(n==0)
        return 1;
    int x = fact(n - 1) * n;
    return x;
}
int main()
{
    printf("Md. Al Imran\n\n");
    int n;
    scanf("%d", &n);
    int f = fact(n);
    printf("%d\n", f);
    printf("\nID: 20245103253");
    return 0;
}