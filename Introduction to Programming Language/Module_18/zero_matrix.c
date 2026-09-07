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
    

    // int flag = 1;

    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         if(arr[i][j] != 0) {
    //             flag = 0;
    //             break;
    //         }
    //     }
    // }

    // if(flag == 1) {
    //     printf("Zero Matrix");
    // } else {
    //     printf("Not a Zero Matrix");
    // }
    

    int total_value = r * c;
    int total_zero = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(arr[i][j] == 0) {
                total_zero++;
            }
        }
    }

    if(total_value == total_zero) {
        printf("Zero Matrix");
    } else {
        printf("Not a Zero Matrix");
    }
    

    return 0;
}