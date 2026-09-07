#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }


    int op_count = 0;
    int op_end = 0;

    while (op_end == 0)    
    {
        for (int i = 0; i < n; i++)
        {
            if(arr[i] > 1 && arr[i] % 2 == 0) {
                arr[i] /= 2;
            } else {
                op_end = 1;
                break;
            }
        }

        if(op_end == 0) op_count++;        
    }
    
    printf("%d", op_count);
    
    return 0;
}