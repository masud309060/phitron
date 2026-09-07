#include <stdio.h>

long long findResult(int x, int n) {

    long long sum = 0;

    int power = 2;
    while (power <= n)
    {
        long long val = 1;
        for (int i = 0; i < power; i++)
        {
            val *= x;
        }
        
        sum += val;
        power += 2;

    }

    return sum;
}

int main()
{
    int x, n;
    scanf("%d %d", &x, &n);

    long long result = findResult(x, n);

    printf("%lld", result);

    return 0;
}