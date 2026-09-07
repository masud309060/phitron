#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int target_index;
    int target_value;

    scanf("%d %d", &target_index, &target_value);

    arr[target_index] = target_value;

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}