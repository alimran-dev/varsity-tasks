#include <stdio.h>

int main()
{
    printf("Md. Al Imran\n\n");

    int a, b, c, result;
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c)
        result = a;
    else if(b>a && b>c)
        result = b;
    else
        result = c;
    printf("%d\n", result);

    printf("\nID: 20245103253");
    return 0;
}