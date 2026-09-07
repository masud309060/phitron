#include <stdio.h>

int main()
{
    int a, b;
    char symbol;

    scanf("%d %c %d", &a, &symbol, &b);

    if(symbol == '>') {
        if(a > b) {
            printf("Right");
        } else {
            printf("Wrong");
        }
    } else if(symbol == '<') {
        if(a < b) {
            printf("Right");
        } else {
            printf("Wrong");
        }
    } else if(symbol == '=') {
        if(a == b) {
            printf("Right");
        } else {
            printf("Wrong");
        }
    }

    return 0;
}