#include <stdio.h>

int main()
{
    printf("Md. Al Imran\n\n");

    char x, y;
    printf("Input any character: ");
    scanf("%c", &x);
    printf("Input any character: ");
    scanf(" %c", &y);

    if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
    {
        printf("%c is alphabet\n", x);
    }
    else if ((x >= '0' && x <= '9'))
    {
        printf("%c is digit\n", x);
    }
    else
    {
        printf("%c is special character\n", x);
    }

    if ((y >= 'a' && y <= 'z') || (y >= 'A' && y <= 'Z'))
    {
        printf("%c is alphabet\n", y);
    }
    else if ((y >= '0' && y <= '9'))
    {
        printf("%c is digit\n", y);
    }
    else
    {
        printf("%c is special character\n", y);
    }

    printf("\nID: 20245103253");
    return 0;
}