#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int star = 1;
    int space = n - 1;

    printf("1. \n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= star; j++)
        {
            printf("* ");
        }

        star++;
        space--;
        printf("\n");
    }


    printf("\n");

    star = 1;
    space = n - 1;

    printf("2. \n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= star; j++)
        {
            printf("%d ", j);
        }

        star++;
        space--;
        printf("\n");
    }

    printf("\n");

    star = n;
    space = 0;

    printf("3. \n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }

        star--;
        space++;
        printf("\n");
    }

        printf("\n");

    star = 2 * n - 1;
    space = 0;

    printf("4. \n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }

        star -= 2;
        space++;
        printf("\n");
    }



    printf("\n");

    star = 1;

    printf("5. \n");
    for (int i = 1; i <= n; i++)
    {        
        for (int j = 0; j < star; j++)
        {
            printf("%c ", 'A' + j);
        }

        star++;
        printf("\n");
    }
    
    return 0;
}