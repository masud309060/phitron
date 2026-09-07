#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        char s[101];
        scanf("%s", s);

        int size;
        size = 0;
        for (int i = 0; s[i] != '\0'; i++)
        {
            size++;
        }
        

        if(size > 10) {
            printf("%c%d%c\n", s[0], size - 2, s[size-1]);
        } else {
            printf("%s\n", s);
        }
    }
    
    return 0;
}