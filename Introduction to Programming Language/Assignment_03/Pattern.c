#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int start = 1;
    int space = n - 1;
    int sign = 1;

    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < space; i++)
        {
            printf(" ");
        }

        for (int j = 0; j < start; j++)
        {
            if(sign % 2 == 0) {
                printf("-");
            } else {
                printf("#");
            }
        }

        printf("\n");
        start += 2;
        space--;  
        sign++;
    }

    start = n * 2 - 3;
    space = 1;


    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < space; i++)
        {
            printf(" ");
        }

        for (int j = 0; j < start; j++)
        {
            if(sign % 2 == 0) {
                printf("-");
            } else {
                printf("#");
            }
        }

        printf("\n");
        start -= 2;
        space++;
        sign++;
    }
    
    return 0;
}