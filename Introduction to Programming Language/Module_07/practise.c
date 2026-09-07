#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[5] = {1, 2, 5, 8, 9};
    int total_odd = 0;
    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < 5; i++)
    {
        if(arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        } else {
            total_odd += 1;
        }

        if(arr[i] < min) min = arr[i];

        if(arr[i] > max) max = arr[i];
    }

    printf("\n");

    printf("Total Odd: %d \n", total_odd);
    printf("Min : %d \n", min);
    printf("Max : %d \n", max);
    

    return 0;
}