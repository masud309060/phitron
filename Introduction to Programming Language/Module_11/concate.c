#include <stdio.h>
#include <string.h>

int main()
{
    char a[101] = "cat";
    char b[101] = "bat";

    // int a_size = strlen(a);
    // int b_size = strlen(b);

    // for (int i = 0; i <= b_size; i++)
    // {
    //     a[a_size + i] = b[i];
    // }
    
    strcat(a, b);

    printf("%s", a);

    return 0;
}   