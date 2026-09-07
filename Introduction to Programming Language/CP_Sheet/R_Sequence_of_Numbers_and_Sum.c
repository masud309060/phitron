#include <stdio.h>

int main()
{
    int t = 1;
    while (t > 0)
    {
        int n, m;
        scanf("%d %d", &n, &m);

        if(n <= 0 || m <= 0) {
            break;
        }

        int start, end, sum = 0;
        if(n < m) {
            start = n;
            end = m;
        } else {
            start = m;
            end = n;
        }

        for (int i = start; i <= end; i++)
        {
            printf("%d ", i);
            sum += i;
        }
        printf("sum =%d\n", sum);
    }

    return 0;
}