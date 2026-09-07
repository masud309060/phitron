#include <stdio.h>
#include <string.h>

int main()
{
    char a[101];
    char b[101];

    scanf("%s %s", a, b);

    int b_size = strlen(b);

    for (int i = 0; i <= b_size; i++)
    {
        a[i] = b[i];
    }

    printf("%s", a);
    
    return 0;
}