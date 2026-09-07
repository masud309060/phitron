#include <stdio.h>

void findDistinct() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int totalDistinct = 0;
    int duplicate;

    for (int i = 0; i < n; i++)
    {
        duplicate = 0;
        for (int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j]) {
                duplicate = 1;
                break;
            }
        }

        if(duplicate == 0) totalDistinct++;
        
    }

    printf("%d", totalDistinct);
    
    return;
}

int main()
{
    findDistinct();
    return 0;
}