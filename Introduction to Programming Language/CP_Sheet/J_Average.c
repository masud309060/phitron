#include <stdio.h>

void average(double arr[],int size) {
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    double avg = sum / size;
    printf("%0.7lf", avg);
    
}

int main()
{
    int n;
    scanf("%d", &n);

    double arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &arr[i]);
    }

    average(arr, n);
    
    return 0;
}