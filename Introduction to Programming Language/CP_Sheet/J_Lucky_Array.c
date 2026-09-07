#include <stdio.h>
#include <limits.h>


int main()
{
    int n;
    scanf("%d", &n);

    int min = INT_MAX;
    int total_min = 0;
    int temp;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &temp);

        if(temp < min) {
            min = temp;
            total_min = 0;
        }

        if(temp == min) total_min++;
    }

    if(total_min % 2 != 0) {
        printf("Lucky");
    } else {
        printf("Unlucky");
    }
    
    return 0;
}