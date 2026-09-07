#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        long long m, a, b, c, d;

        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long multi_of3 = a * b * c;

        if(m % multi_of3 == 0) {
            d = m / multi_of3;
            printf("%lld", d);
        } else {
            printf("-1");
        }

        printf("\n");
    }

    return 0;
}