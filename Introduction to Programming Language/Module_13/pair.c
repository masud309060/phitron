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
        for (int j = 1; j < n; j++)
        {
            if(arr[i] + arr[j] == 8) {
                printf("%d %d", arr[i], arr[j]);
                break;
            }
        }
    }
    
    return 0;
}