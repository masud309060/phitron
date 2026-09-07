#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int result = sum(a, b);

    printf("%d", result);

    return 0;
}