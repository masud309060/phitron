#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n + 1];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int index;
    int value;

    scanf("%d %d", &index, &value);


    for (int i = n; i > index; i--) 
    {        
        if(index == i) {
            arr[i] = value;
        } else {
            arr[i] = arr[i - 1];
        }
    }

    arr[index] = value;
    

    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}