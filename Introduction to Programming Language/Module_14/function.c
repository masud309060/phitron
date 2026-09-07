#include <stdio.h>

int sum() {
    int a, b;
    scanf("%d %d", &a, &b);
    int s = a + b;
    return s;
}

int sub(int a, int b) {
    int s = a - b;
    return s;
}

int main()
{
    int val = sum();
    printf("%d", val);
    return 0;
}

