#include <stdio.h>

int main()
{
    printf("Md. Al Imran\n\n");
    int a, b, result = 1;
    scanf("%d%d", &a, &b);
    int mx;
    if(a>b)
        mx = a;
    else
        mx = b;
    while (1)
    {
        if(mx%a==0 && mx%b==0)
        {
            result = mx;
            break;
        }
        mx++;
    }
    printf("%d\n", result);
    printf("\nID: 20245103253");
    return 0;
}