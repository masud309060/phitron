#include <stdio.h>
#include<limits.h>

int main()
{
    int n;
    int temp;
    int max = INT_MIN;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        if(temp > max) max = temp;
    }

    printf("%d\n", max);
    
    return 0;
}