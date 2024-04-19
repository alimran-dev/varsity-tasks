#include <stdio.h>

int main()
{
    printf("Md. Al Imran\n\n");
    for (int i = 0; i < 26; i++)
    {
        int x = i + 'a';
        printf("%c - %d\n", x, x);
    }
    printf("\nID: 20245103253");
    return 0;
}