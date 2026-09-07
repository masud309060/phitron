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
        int is_scalar = 1;
        int diagonal_value = arr[0][0];


        for (int i = 0; i < r; i++)
        {
            if(diagonal_value != arr[i][i]) {
                is_scalar = 0;
            }

            for (int j = 0; j < c; j++)
            {
                if(i != j && arr[i][j] != 0) {
                    is_diagonal = 0;
                    break;
                }
            }
        }

        if(is_diagonal == 1 && is_scalar == 1) {
            printf("Scalar");
        } else {
            printf("Not Scalar");
        }
    }

    
    return 0;
}