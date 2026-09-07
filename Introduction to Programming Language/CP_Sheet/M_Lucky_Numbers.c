#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int countLucky = 0;

    for (int i = a; i <= b; i++)
    {
        int num = i;
        int isLucky = 1;

        while (num > 0)   
        {
            int reminder = num % 10;
            if(reminder != 4 && reminder != 7) {
                isLucky = -1;
            }
            num /= 10;
        }

        if(isLucky == 1) {
            printf("%d ", i);
            countLucky++;
        }
    }

    if(countLucky == 0) {
        printf("-1");
    }
    
    return 0;
}