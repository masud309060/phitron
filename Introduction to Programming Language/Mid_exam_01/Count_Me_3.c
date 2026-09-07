#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        char str[10001] = {0};
        scanf("%s", str);

        int digit = 0;
        int small = 0;
        int capital = 0;
        
        for (int i = 0; str[i] != '\0'; i++)
        {
            if(str[i] >= '0' && str[i] <= '9') {
                digit++;
            } else if(str[i] >= 'a' && str[i] <= 'z') {
                small++;
            } else if(str[i] >= 'A' && str[i] <= 'Z') {
                capital++;
            }
        }
        
        printf("%d %d %d\n", capital, small, digit);
    }

    return 0;
}