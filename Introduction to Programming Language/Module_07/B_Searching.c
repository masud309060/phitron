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

    int target;
    int target_index = -1;
    scanf("%d", &target);

    for (int i = 0; i < n; i++)
    {
        if(arr[i] == target) {
            target_index = i;
            break;
        }
    }

    printf("%d", target_index);
    
    return 0;
}