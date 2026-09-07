#include <stdio.h>

int main()
{
    int n;
    int temp;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &temp);
        while (temp >= 0) 
        {
            printf("%d ", temp % 10);
            temp /= 10;
            if(temp == 0) temp = -1;
        }
        printf("\n");
    }
    
    return 0;
}