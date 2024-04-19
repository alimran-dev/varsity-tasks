#include <stdio.h>

int main()
{
    printf("Md. Al Imran\n\n");
    int n, m = 0;
    scanf("%d", &n);
    int x = n;
    while (x)
    {
        int r = x % 10;
        x /= 10;
        m = m * 10 + r;
    }
    if(n==m)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    printf("\nID: 20245103253");
    return 0;
}