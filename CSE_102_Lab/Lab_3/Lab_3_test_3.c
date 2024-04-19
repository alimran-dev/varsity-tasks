#include <stdio.h>

int main()
{
    printf("Md. Al Imran\n\n");

    char x, y;
    printf("Input character: ");
    scanf("%c", &x);
    printf("Input character: ");
    scanf(" %c", &y);

    if (x == 'a' || x == 'A' || x == 'e' || x == 'E' || x == 'i' || x == 'I' || x == 'o' || x == 'O' || x == 'u' || x == 'U')
    {
        printf("'%c' is a vowel\n", x);
    }
    else
    {
        printf("'%c' is not a vowel\n", x);
    }
    if (y == 'a' || y == 'A' || y == 'e' || y == 'E' || y == 'i' || y == 'I' || y == 'o' || y == 'O' || y == 'u' || y == 'U')
    {
        printf("'%c' is a vowel\n", y);
    }
    else
    {
        printf("'%c' is not a vowel\n", y);
    }

    printf("\nID: 20245103253");
    return 0;
}