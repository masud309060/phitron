#include <stdio.h>
#include <stdlib.h>


int main()
{

    int test;
    scanf("%d", &test);

    for (int t = 0; t < test; t++)
    {
        
        int n;
        scanf("%d", &n);

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }


        // make a copy of this array named B
        int arrB[n];
        for (int i = 0; i < n; i++)
        {
            arrB[i] = arr[i];
        }

        // sort the array B in ascending order.
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if(arrB[j] > arrB[j + 1]) {
                    int temp = arrB[j];
                    arrB[j] = arrB[j + 1];
                    arrB[j + 1] = temp;
                }
            }
        }

        // make another array C, where each index i (0 <= i < N) of array C is the absolute difference between array A[i] and B[i].
        int arrC[n];
        for (int i = 0; i < n; i++)
        {
            arrC[i] = abs(arr[i] - arrB[i]);
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d ", arrC[i]);
        }
        printf("\n");
    }
    
    
    
    
    return 0;
}