#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int m1, m2, d;

        scanf("%d %d %d", &m1, &m2, &d);

        int total_m = m1 + m2;
        int total_d = (m1 * d) / total_m;

        printf("%d\n", d - total_d);
    }
    

    return 0;
}