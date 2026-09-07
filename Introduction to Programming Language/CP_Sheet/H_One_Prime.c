#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);


    int isPrime = 1;

    if(n < 2) isPrime = -1;

    for (int i = 2; i <= n/2; i++)
    {
        if(n % i == 0) {
            isPrime = -1;
            break;
        }
    }

    if(isPrime == 1) {
        printf("YES");
    } else {
        printf("NO");
    }
    

    return 0;
}