#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r = 5, c = 5;
    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int move_need;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(arr[i][j] == 1) {
                move_need = abs(2 - j) + abs(2 - i);
                break;
            }
        }
    }

    printf("%d", move_need);
    
    return 0;
}