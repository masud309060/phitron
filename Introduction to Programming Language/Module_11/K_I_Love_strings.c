#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        char x[51] = {0}, y[51] = {0};
        scanf("%s %s", x, y);

        char new_str[102];
        char index = 0;

        for (int i = 0, j = 0; i < 51; i++, j++)
        {
            if(x[i] >= 'A' && y[i] >= 'A') {
                new_str[index] = x[i];
                index++;
                new_str[index] = y[i];
                index++;
            } else if(x[i] >= 'A') {
                new_str[index] = x[i];
                index++;
            } else if(y[i] >= 'A') {
                new_str[index] = y[i];
                index++;
            }
        }

        new_str[index] = '\0';
        printf("%s\n", new_str);
    }

    printf("%d", 'a');
    
    return 0;
}