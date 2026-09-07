#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(a > 100) a = a % 100;
    if(b > 100) b = b % 100;
    if(c > 100) c = c % 100;
    if(d > 100) d = d % 100;

    int mul = a * b * c * d;
    int last_2_digit = mul % 100;

    if(last_2_digit <= 9) {
        printf("0");
    }

    printf("%d", last_2_digit);

    return 0;
}