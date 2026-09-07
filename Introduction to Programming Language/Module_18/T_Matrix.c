#include <stdio.h>

int main()
{
    int r;
    scanf("%d", &r);

    int arr[r][r];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int sum_primary = 0;
    int sum_secondary = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if(i == j) {
                sum_primary += arr[i][j];
            }

            if(i + j == r - 1) {
                sum_secondary += arr[i][j];
            }
        }
    }

    int diff = sum_primary - sum_secondary;

    if(diff < 0) diff *= -1;

    printf("%d", diff);
    
    return 0;
}