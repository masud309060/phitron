#include <stdio.h>

int main()
{
    int n = 20;
    char s[n];

    fgets(s, 10, stdin);

    printf("%s", s);

    return 0;
}