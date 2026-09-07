#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        int start, end, sum = 0;
        if(x > y) start = y, end = x;
        else start = x, end = y;

        start++;
        while (start < end)
        {
            if(start % 2 != 0) sum += start;
            start++;
        }
        printf("%d\n", sum);
    }
    
    return 0;
}