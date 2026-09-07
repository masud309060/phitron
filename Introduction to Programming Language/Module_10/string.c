#include <stdio.h>

int main()
{
    int n = 4;
    char a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%c", &a[i]);
    }


    for (int i = 0; i < n; i++)
    {
        printf("%c", a[i]);
    }
    
    
    return 0;
}