#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int year = 0, month = 0, day = 0;

    if(n >= 365) {
        year = n / 365;
        n = n % 365;

    }
    
    if(n >= 30) {
        month = n / 30;
        n = n % 30;
    }
    
    day = n;
    
    printf("%d years\n", year);
    printf("%d months\n", month);
    printf("%d days", day);

    return 0;
}