#include <stdio.h>

int my_len(char str[]) {
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }

    return count;    
}

int main()
{
    char str[100];
    scanf("%s", str);

    int length = my_len(str);

    printf("%d", length);

    return 0;
}