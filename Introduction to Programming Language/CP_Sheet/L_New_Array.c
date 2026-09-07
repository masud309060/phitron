#include <stdio.h>

void concateArray(int a[], int b[], int size) {
    int new_array_size = size + size;

    int c[new_array_size];

    for (int i = 0; i < size; i++)
    {
        c[i] = b[i];
    }

    for (int i = 0; i < size; i++)
    {
        c[size + i] = a[i];
    }

    for (int i = 0; i < new_array_size; i++)
    {
        printf("%d ", c[i]);
    }
    
    
    
}

int main()
{
    int n;

    scanf("%d", &n);
    int a[n];
    int b[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }


    concateArray(a, b, n);
    
    return 0;
}