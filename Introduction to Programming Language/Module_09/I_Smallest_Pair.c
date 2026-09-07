#include <stdio.h>
#include <limits.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int test = 0; test < t; test++)
    {
        int n;
        scanf("%d", &n);

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }


        int i = 1;
        int j = i + 1;
        int min_sum = INT_MAX;
        int each_sum;

        for (int i = 1; i < n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                each_sum = arr[i -1] + arr[j -1] + j - i;
                // printf("%d %d = %d \n", i, j, each_sum);
                if(each_sum < min_sum) min_sum = each_sum;
            }
        }

        printf("%d \n", min_sum);   

    }
    
    
    return 0;
}