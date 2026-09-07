#include <stdio.h>

void printDigit(int n) {

    if(n <= 0) return;

    int reminder = n % 10;

    printDigit(n/10);

    printf("%d ", reminder);
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        if(n == 0) printf("0");
        else printDigit(n);
        printf("\n");
    }
    
    return 0;
}