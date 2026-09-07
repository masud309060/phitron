#include <stdio.h>

int main()
{
    char str[10001];

    scanf("%s", str);

    char hello[] = "hello";
    int index = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if(hello[index] == str[i]) {
            index++;
        }
    }

    if(index == 5) {
        printf("YES");
    } else {
        printf("NO");
    }
    
    return 0;
}