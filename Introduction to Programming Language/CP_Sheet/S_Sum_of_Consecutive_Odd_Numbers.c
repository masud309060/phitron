#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t > 0)
    {
        int n, m;
        scanf("%d %d", &n, &m);

        if(n < 0 || m < 0) {
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

        for (int i = start + 1; i < end; i++)
        {
            if(i % 2 != 0) sum += i;
        }

        printf("%d\n", sum);
        t--;
    }

    return 0;
}