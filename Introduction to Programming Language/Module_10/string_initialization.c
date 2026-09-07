#include <stdio.h>

int main()
{
    // char s[6] = {'H', 'e', 'l', 'l', 'o','\0'};
    char s[12] = "HelloW\0\rld";

    printf("%s", s);

    return 0;
}