#include <stdio.h>
#include <math.h>

int isPrime(int n) {

    if(n < 2) return 0;

    int prime = 1;

    int sq = sqrt(n);

    for (int i = 2; i <= sq; i++)
    {
        if(n % i == 0) {
            prime = 0;
            break;
        }
    }

    return prime;
}

int main()
{
    int t;
    scanf("%d", &t);


    for (int i = 0; i < t; i++)
    {

        int n;
        scanf("%d", &n);

        if(isPrime(n) == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}