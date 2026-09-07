#include <stdio.h>

int isOdd(int n) {
    if(n % 2 != 0) return 1;
    else return 0;
}

int binary(int n) {
    int bi[n];

    int index = 0;
    while (n > 0)
    {
        bi[index] = n % 2;
        n /= 2;
    }

    return bi;    
}

int plindrom(int bi[]) {
    int palin = 1;

    for (int i = 0, j = 100; i < size/2; i++, j--)
    {
        if(bi[i] != bi[j]) {
            palin = 0;
            break;
        }
    }
    
    return palin;
}

int main()
{
    int n;
    scanf("%d", &n);

    int odd = isOdd(n);

    int bi[] = binary(n);



    return 0;
}