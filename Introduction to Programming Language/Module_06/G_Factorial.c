#include <stdio.h>

int main()
{
    int n;
    int f;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &f);
        long long factorial = 1;

        for (int j = 2; j <= f; j++)
        {
            factorial *= j;
        }
        
        printf("%lld\n", factorial);
    }
    
    return 0;
}