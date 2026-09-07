#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    if(ch >= 65 && ch < 97) {
        ch += 32;
    } else {
        ch -= 32;
    }

    printf("%d", ch);

    return 0;
}