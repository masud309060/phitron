#include <stdio.h>

int main()
{
    int n;
    int total_even = 0;

    scanf("%d", &n);

    for (int i = 2; i <= n; i = i + 2)
    {
        printf("%d\n", i);
        total_even++;
    }

    if (total_even == 0)
    {
        printf("%d\n", -1);
    }

    return 0;
}