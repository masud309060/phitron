#include <stdio.h>

int logg(long long n) {
    if(n == 0) return 0;
    if(n == 1) return 0;

    return logg(n/2) + 1;
}

int main()
{
    long long n;

    scanf("%lld", &n);

    int count = logg(n);

    printf("%d", count);
    

    return 0;
}