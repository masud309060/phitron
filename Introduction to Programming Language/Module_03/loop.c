#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i = i + 1)
    {
        // 2 Multiplication
        // printf("%d x %d = %d \n", i , 2, i * 2);

        // 7 Multiplication
        // printf("%d x %d = %d \n", i , 7, i * 7);
    }

    for (int i = 10; i >= 1; i = i - 1)
    {
        printf("%d \n", i);
    }

    printf("------------------- \n");
    int sum = 0;
    for (int i = 1; i <= 10; i = i + 1)
    {
        sum = sum + i;
    }

    printf("sum = %d \n", sum);
    return 0;
}