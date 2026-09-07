#include <stdio.h>

long long sumArray(int arr[], int size) {
    if(size <= 0) return 0;

    return sumArray(arr, size - 1) + arr[size - 1];
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

    long long sum = sumArray(arr, n);

    printf("%lld", sum);
    
    return 0;
}