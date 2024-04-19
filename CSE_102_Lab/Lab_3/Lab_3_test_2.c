#include <stdio.h>

int main()
{
    printf("Md. Al Imran\n\n");

    int y;
    printf("Input year: ");
    scanf("%d", &y);
    if (!(y % 400))
    {
        printf("%d is a leap year\n", y);
    }
    else if (!(y % 4) && y % 100)
    {
        printf("%d is a leap year\n", y);
    }
    else
    {
        printf("%d is not a leap year\n", y);
    }

    printf("\nID: 20245103253");
    return 0;
}