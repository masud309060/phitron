#include <stdio.h>

void m(int *a) {
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    
}

int main()
{
    int a[5] = {6, 5, 3};

    m(a);
    return 0;
}