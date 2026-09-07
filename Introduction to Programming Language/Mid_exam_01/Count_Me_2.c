#include <stdio.h>

int main()
{
    char str[100000] = {0};
    scanf("%s", str);

    int consonant = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            continue;
        }

        consonant++;
    }

    printf("%d", consonant);
    
    return 0;
}