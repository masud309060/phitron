#include <stdio.h>

int isLucky(int n) {
    int flag = 1;

    while(n > 0) {
        int reminder = n % 10;
        
        if(reminder != 4 && reminder != 7) {
            flag = -1;
            break;
        }

        n /= 10;
    }

    return flag;
}

int main()
{
    int n;
    scanf("%d", &n);

    int lucky = 0;

    int luckyNumbers[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777 };

    for (int i = 0; i < 14; i++)
    {

        if(isLucky(n) == 1 || n % luckyNumbers[i] == 0) {
            lucky = 1;
            break;
        }
    }


    if(lucky == 1) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}