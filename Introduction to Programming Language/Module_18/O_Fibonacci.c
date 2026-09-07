#include <stdio.h>

long long F[51];

long long fib(int n) {
    if(n == 1) return 0;
    if(n == 2) return 1;

    if(F[n] != -1) return F[n];

    F[n] = fib(n - 1) + fib(n - 2);

    return F[n];
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < 51; i++)
    {
        F[i] = -1;
    }

    printf("%lld", fib(n));
    return 0;
}