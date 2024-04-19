#include <stdio.h>

int main()
{
    printf("Md. Al Imran\n\n");
    int n;
    scanf("%d", &n);
    int ar1[n];
    int ar2[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &ar1[i]);
    for (int i = 0; i < n; i++)
        ar2[i] = ar1[i];
    printf("Array1: ");
    for (int i = 0; i < n; i++)
        printf("%d ", ar1[i]);
    printf("\nArray2: ");
    for (int i = 0; i < n; i++)
        printf("%d ", ar2[i]);

    printf("\nID: 20245103253");
    return 0;
}