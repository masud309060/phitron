#include <stdio.h>
#include <limits.h>


int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int low_num = INT_MAX;
    int low_num_index;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] < low_num) {
            low_num = arr[i];
            low_num_index = i;
        }
    }

    printf("%d %d", low_num, low_num_index + 1);
    
    return 0;
}