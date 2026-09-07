#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int start = 1;
    int space = n - 1;

    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < space; i++)
        {
            printf(" ");
        }

        for (int j = start; j > 0; j--)
        {
            printf("%d", j);
        }

        printf("\n");
        start ++;
        space--;  
    }
    
    return 0;
}