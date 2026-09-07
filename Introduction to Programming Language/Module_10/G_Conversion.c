#include <stdio.h>
#include <string.h>

int main()
{
    char s[100001];

    fgets(s, 100001, stdin);

    for (int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == ',') printf("%c", ' ');
        else if(s[i] >= 'a') printf("%c", s[i] - 32);
        else if(s[i] >= 'A') printf("%c", s[i] + 32);
    }

    return 0;
}