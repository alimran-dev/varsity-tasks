#include <stdio.h>

int main()
{
    printf("Md. Al Imran\n\n");
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int cnt[1000] = {0};
    for (int i = 0; i < n; i++)
        cnt[arr[i]]++;
    for (int i = 0; i < 1000; i++)
    {
        if (cnt[i])
            printf("Frequency of %d = %d\n", i, cnt[i]);
    }

    printf("\nID: 20245103253");
    return 0;
}