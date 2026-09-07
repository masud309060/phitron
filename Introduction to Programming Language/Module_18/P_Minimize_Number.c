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

    int attempt = 0;

    while (attempt >= 0)
    {
        int allEven = 1;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] % 2 != 0) {
                allEven = 0;
                break;
            }
        }

        if(allEven == 1) {
            attempt++;

            for (int i = 0; i < n; i++)
            {
                arr[i] = arr[i] / 2;
            }
        } else {
            break;
        }
    }

    printf("%d", attempt);
    
    return 0;
}