#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    // n = 1, sp = 5, st = 1;
    // n = 3, sp = 6, st = 1;
    // n = 5, sp = 7, st = 1;

    int space = (n + 1) / 2 + 4;
    int star = 1;

  
    while (space >= 0)
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

        space--;
        star += 2;
    }

    space = 5;
    star = n;
    
    for (int i = 0; i < 5; i++)
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
        
    }


    return 0;
}