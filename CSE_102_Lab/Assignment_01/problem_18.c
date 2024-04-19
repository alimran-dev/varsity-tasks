#include <stdio.h>

int main()
{
    printf("Md. Al Imran\n\n");
    int a, b, result = 1;
    scanf("%d%d", &a, &b);
    for (int i = 1; i<=a || i<=b; i++)
    {
        if(!(a%i) && !(b%i))
            result = i;
    }
    printf("%d\n", result);
    printf("\nID: 20245103253");
    return 0;
}