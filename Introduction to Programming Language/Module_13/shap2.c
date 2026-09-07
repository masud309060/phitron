#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int star = 1;
    int space = n - 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= star; j++)
        { 
            printf("%d ", j);
        }

        printf("\n");

        star += 1;
        space -= 1;   
    }
    
    return 0;
}