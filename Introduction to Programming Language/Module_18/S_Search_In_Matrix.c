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

    scanf("%d", &x);

    int flag = 1;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(arr[i][j] == x) {
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1) {
        printf("will take number");
    } else {
        printf("will not take number");
    }

    
    return 0;
}