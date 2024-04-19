#include <stdio.h>

int main()
{
    printf("Md. Al Imran\n\n");
    int n;
    scanf("%d", &n);
    int x = 0, y = 1, tmp;
    for (int i = 0; i < n; i++)
    {
        if(i<2)
            printf("%d ", i);
        else
        {
            printf("%d ", x + y);
            tmp = x;
            x = y;
            y = tmp + y;
        }
    }
    printf("\nID: 20245103253");
    return 0;
}