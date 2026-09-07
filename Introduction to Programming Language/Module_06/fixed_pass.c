#include <stdio.h>

int main()
{
    int pass;
    int has_pass = 1;

    while (has_pass == 1)
    {
        pass = 0;
        scanf("%d", &pass);

        if(pass == 0) {
            has_pass = 0;
            break;
        };

        if(pass == 1999) {
            printf("Correct\n");
            break;
        } else {
            printf("Wrong\n");
        }
    }

    return 0;
}