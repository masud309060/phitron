#include <stdio.h>

int main()
{
    int year;
    scanf("%d", &year);

    int flag = 0;
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        flag = 1;
    }

    if(flag == 1) {
        printf("%d is Leap Year", year);
    } else {
        printf("%d is Not Leap Year", year);
    }

    return 0;
}