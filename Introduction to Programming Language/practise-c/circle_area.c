#include<stdio.h>
#include<math.h>

int main() {

    double r, area, pi;
    pi = acos(-1);

    scanf("%lf", &r);
    area = pi * r * r;
    printf("Area of circle is: %0.9lf", area);

    
    return 0;
}