#include <stdio.h>

int main()
{
    printf("Md. Al Imran\n\n");
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int pos;
    printf("Input position to delete: ");
    scanf("%d", &pos);
    for (int i = pos - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];
    printf("Array elements: ");
    for (int i = 0; i < n - 1; i++)
        printf("%d ", arr[i]);

    printf("\nID: 20245103253");
    return 0;
}