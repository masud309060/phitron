#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};

    *(a + 1) = 100; // *(a + 1) ==> add 1 means 4, so here add 4 byte. which is next index. 
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    

    return 0;
}