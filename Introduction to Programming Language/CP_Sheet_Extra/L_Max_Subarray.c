#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        // for (int i = 0; i < n - 1; i++)
        // {
        //     for (int j = 0; j < i; j++)
        //     {
        //         printf("%d", arr[j]);
        //     }
            
        // }
        
        
    }
    
    return 0;
}