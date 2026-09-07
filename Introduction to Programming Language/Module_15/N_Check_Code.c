#include <stdio.h>

int main()
{
    int a, b;
    char s[21];

    scanf("%d %d", &a, &b);
    scanf("%s", s);

    int flag = 0;

    if(s[a] == '-') {
        flag = 1;

        for (int i = 0; s[i] != '\0'; i++)
        {

            if(i == a) continue;

            if(s[i] < '0' || s[i] > '9') {
                flag = 0;
                break;
            }
        }

    } else {
        flag = 0;
    }

    
    if(flag == 0) {
        printf("No");
    } else {
        printf("Yes");
    }

    return 0;
}