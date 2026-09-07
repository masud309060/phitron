#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    // star = 1, 3, 5, 7 ==> increase 2 every time 
    // space = 3, 2, 1, 0 ==> decrease 1 every time 

    int space = n - 1;
    int star = 1;

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

        space--;
        star += 2;
    }
    
    return 0;
}