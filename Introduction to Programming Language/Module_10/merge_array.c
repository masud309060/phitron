#include <stdio.h>

int main()
{
    int n1;
    scanf("%d", &n1);

    int a[n1];

    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    int n2;
    scanf("%d", &n2);

    int b[n2];

    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    int new_n = n1 + n2;
    int new_arr[new_n];

    for (int i = 0; i < new_n; i++)
    {
        if(i < n1) {
            new_arr[i] = a[i];
        } else {
            new_arr[i] = b[i - n1];
        }
    }

    for (int i = 0; i < new_n; i++)
    {
        printf("%d ", new_arr[i]);
    }
    
    return 0;
}