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

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if(arr[i] != 0) break;
            else if(arr[j] != 0) {
                arr[i] = arr[j];
                arr[j] = 0;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    return 0;
}