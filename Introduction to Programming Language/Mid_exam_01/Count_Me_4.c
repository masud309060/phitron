#include <stdio.h>

int main()
{
    char str[10001] = {0};
    scanf("%s", str);

    int smallAlpha[26] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        int val = str[i];
        smallAlpha[val - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if(smallAlpha[i] == 0) continue;
        printf("%c - %d\n", i + 'a', smallAlpha[i]);
    }
    
    return 0;
}