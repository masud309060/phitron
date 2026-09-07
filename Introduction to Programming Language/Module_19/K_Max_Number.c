#include <stdio.h>

int maximum(int arr[], int size) {
    if(size == 0) return 0;
    if(size == 1) return arr[size -1];
    
    int max = arr[size - 1];
    int next = maximum(arr, size - 1);
    
    if(max > next) {
        return max;
    } else {
        return next;
    }
}


int main()
{
    int n;  
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }


    int max = maximum(arr, n);

    printf("%d", max);

    return 0;
}