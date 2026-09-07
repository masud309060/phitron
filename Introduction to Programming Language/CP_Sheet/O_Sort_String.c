#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[30] = {0};
    char c;

    for (int i = 0; i <= n; i++)
    {
        scanf("%c", &c);
        int val = c - 'a';
        arr[val]++;
    }

    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < arr[i]; j++)
        {
            printf("%c", i + 'a');
        }
    }
        
    return 0;
}