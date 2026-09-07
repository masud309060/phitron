#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int star = 1;
    int space = n - 1;

    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < space; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < star; i++)
        {
            printf("*");
        }
        printf("\n");

        star += 2;
        space--;
    }

    star = n * 2 - 1;
    space = 0;
    
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < space; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < star; i++)
        {
            printf("*");
        }
        printf("\n");

        star -= 2;
        space++;
    }
    
    return 0;
}