#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    // check digits (48 - 57)
    if(ch >= '0' && ch <= '9') {
        printf("IS DIGIT\n");
    } else {
        printf("ALPHA\n");
        // check capital letter
        if(ch >= 'A' && ch <= 'Z') {
            printf("IS CAPITAL");
        } else {
            printf("IS SMALL");
        }
    }
    return 0;
}