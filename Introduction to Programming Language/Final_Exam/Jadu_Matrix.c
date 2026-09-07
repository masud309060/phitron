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

    int is_jadu = 1;

    // check square 
    if(r == c) {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {

                if(i != j && i + j != r - 1) {
                    // outside of primary and secondary diagonal
                    if(arr[i][j] != 0) {
                        is_jadu = 0;
                    }
                } else {
                    // inside of primary and secondary diagonal
                    if(arr[i][j] != 1) {
                        is_jadu = 0;
                    }
                }
            }

            if(is_jadu != 1) break;
        }
    } else {
        is_jadu = 0;
    }

    if(is_jadu == 1) {
        printf("YES");
    } else {
        printf("NO");
    }
    
    return 0;
}