#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int t = 1; t <= n; t++)
    {
        
        int isPrime = 1;

        if(t < 2) isPrime = -1;

        for (int i = 2; i <= t/2; i++)
        {
            if(t % i == 0) {
                isPrime = -1;
                break;
            }
        }

        if(isPrime == 1) {
            printf("%d ", t);
        }
    }
    

    return 0;
}