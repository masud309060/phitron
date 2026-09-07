#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int last2 = 0;
    int last1 = 1;
    int next;

    printf("%d ", last2);
    if(n > 1) printf("%d ", last1);

    for (int i = last1; i < n - 1; i++)
    {
        next = last2 + last1;
        printf("%d ", next);

        last2 = last1;
        last1 = next;
    }
    
    return 0;
}