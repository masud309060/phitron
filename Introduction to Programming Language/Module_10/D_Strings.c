#include <stdio.h>
#include <string.h>

int main()
{
    char a[11];
    char b[11];

    scanf("%s %s", a, b);

    int size_a = strlen(a);
    int size_b = strlen(b);

    printf("%d %d\n", size_a, size_b);
    printf("%s%s\n", a, b);

    int temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%s %s", a, b);

    return 0;
}