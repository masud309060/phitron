#include <stdio.h>

int char_to_ascii(char c) {
    int ascii = (int) c;
    return ascii;
}

char small_to_capital(char c) {
    char capital = c;
    if(c >= 'a' && c <= 'z') {
        capital -= 32;
    }

    return capital;
}

int main()
{
    char c;
    scanf("%c", &c);

    int val = char_to_ascii(c);
    char capital = small_to_capital(c);
    
    printf("%d %c", val, capital);

    return 0;
}