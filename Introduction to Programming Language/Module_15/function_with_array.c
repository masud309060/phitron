#include <stdio.h>

void func(int *a) {

    // printf("Fun Function: %p\n", a);
    // a[1] = 200;

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    
}

int main()
{
    int a[5] = {10, 20, 30, 40, 50};

    // printf("Main function Func: %p \n", a);
    func(a);

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d ", a[i]);
    // }
    


    return 0;
}