#include <stdio.h>

int main()
{
    int r, c, x;
    scanf("%d %d", &r, &c);

    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }


    if(r == c) {
        int is_diagonal = 1;
        int is_unit = 1;

        for (int i = 0; i < r; i++)
        {
            if(arr[i][i] != 1) {
                is_unit = 0;
            }

            for (int j = 0; j < c; j++)
            {
                if(i != j && arr[i][j] != 0) {
                    is_diagonal = 0;
                    break;
                }
            }
        }

        if(is_diagonal == 1 && is_unit == 1 ) {
            printf("Unit Matrix");
        } else {
            printf("Not Unit Matrix");
        }
    }

    
    return 0;
}