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
    

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
        
    }

    if(r == c) printf("Square Matrix");
    else if(r == 1) printf("Row Matrix");
    else if(c == 1) printf("Column Matrix");
    
    
    return 0;
}