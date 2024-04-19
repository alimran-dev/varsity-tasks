#include <stdio.h>

int main()
{
    printf("Md. Al Imran\n\n");
    int y;
    scanf("%d", &y);
    if (!(y % 400) || (!(y % 4) && (y % 100)))
        printf("Leap Year\n");
    else
        printf("Not Leap Year\n");
    printf("\nID: 20245103253");
    return 0;
}