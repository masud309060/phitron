#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    long long arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    

    // default - kono small number na pele last number er shathe 1 jog 
    long long small_number = arr[n - 1] + 1;;

    if(arr[0] == 0) {
        
        for (int i = 0; i < n - 1; i++)
        {
            if(arr[i + 1] - arr[i] > 1) {
                small_number = arr[i] + 1;
                break;
            }
        }

    } else {
        small_number = 0;
    };

    printf("%lld", small_number);

    return 0;
}