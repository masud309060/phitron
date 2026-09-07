#include<stdio.h>

int main() {
    double r, PI, c;
    PI = 3.1416;
    
    scanf("%lf", &r);
    
    c = 2 * PI * r;

    printf("Circumference = %0.4lf", c);

    return 0;
}