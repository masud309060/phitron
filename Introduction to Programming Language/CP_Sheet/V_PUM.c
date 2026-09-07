#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int start = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = start; j < start + 3; j++)
        {
            printf("%d ", j);
        }
        printf("PUM\n");
        start += 4;
    }
    
    return 0;
}