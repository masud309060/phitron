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


    // first check square 
    if(r == c) {
        int flag = 1;

        // primary diagonal check 
        for (int  i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if(i != j) {
                    // we are now outsite of diagonal
                    if(arr[i][j] != 0) {
                        flag = 0;
                        break;
                    }
                } 
            }
        }


        int secondary_diagonal = 1;
        // check secondary diagonal 
        for (int  i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if(i + j != r - 1) {
                    // we are now outsite of secondary diagonal
                    if(arr[i][j] != 0) {
                        secondary_diagonal = 0;
                        break;
                    }
                } 
            }
        }

        if(secondary_diagonal) {
            printf("Secondary Diagonal\n");
        } else {
            printf("Not Secondary Diagonal\n");
        }
        

        if(flag == 1) {
            printf("Primary Diagonal");
        } else {
            printf("Not Primary Diagonal");
        }
    } else {
        printf("Not Diagonal");
    }
    



    return 0;
}