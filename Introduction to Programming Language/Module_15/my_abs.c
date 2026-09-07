#include <stdio.h>

int my_abs(int x) {
    if(x < 0) x *= -1;
    return x;
}

int main()
{
    int x;
    scanf("%d", &x);

    x = my_abs(x);

    printf("%d", x);

    return 0;
}