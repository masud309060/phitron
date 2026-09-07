#include <stdio.h>

int main()
{
    char s;
    int t, n;

    scanf("%c %d", &s, &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            printf("%c", s);
        }
        printf("\n");
    }
    
    return 0;
}