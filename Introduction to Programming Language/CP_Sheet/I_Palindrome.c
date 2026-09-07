#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int real = n, reverse = 0, reminder;

    while (n != 0)  
    {
        reminder = n % 10;
        reverse = reverse * 10 + reminder;
        n /= 10;
    }
    

    printf("%d\n", reverse);

    if(real == reverse) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}