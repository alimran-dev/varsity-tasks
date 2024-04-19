#include <stdio.h>

int main()
{
    printf("Md. Al Imran\n\n");
    int n;
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int val, pos;
    printf("Input element to insert: ");
    scanf("%d", &val);
    printf("Input position where to insert: ");
    scanf("%d", &pos);
    for (int i = n; i >= pos - 1; i--)
    {
        if (i == pos - 1)
            arr[i] = val;
        else
            arr[i] = arr[i - 1];
    }
    printf("Elements of array are: ");
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    printf("\nID: 20245103253");
    return 0;
}