#include <stdio.h>

void fun(int* x) {
    *x = 200;
    printf("Child Function X reference = %p\n", x);
}

int main()
{
    int x = 10;

    fun(&x);

    printf("Main Function X = %d\n", x);
    printf("Main Function X reference = %p\n", &x);
    return 0;
}