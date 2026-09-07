#include <stdio.h>

int main()
{
    int r, c;

    scanf("%d %d", &r, &c);

    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }


    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         printf("%d ", arr[i][j]);
    //     }

    //     printf("\n");
    // }

    // int row;

    // scanf("%d", &row);

    // for (int j = 0; j < c; j++)
    // {
    //     printf("%d ", arr[row][j]);
    // }

    int column;
    scanf("%d", &column);

    for (int i = 0; i < r; i++)
    {
        printf("%d\n", arr[i][column]);
    }
    
    
    
    return 0;
}