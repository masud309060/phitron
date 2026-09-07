#include <stdio.h>

int main() {
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

    // Reverse of B
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        int temp = b[i];
        b[i] = b[j];
        b[j] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i] + b[i]);
    } 
    

    return 0;
}