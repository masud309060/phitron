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

    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            int a = arr[i];
            int b = arr[j];

            if(a%2 == 0 && b%2 == 0) {
                continue;
            } else if(a%2 != 0 && b%2 != 0) {
                continue;
            }

            count++;
        }
        
    }
    

    printf("%d", count);
    
    return 0;
}