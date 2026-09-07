#include <stdio.h>

int main() {
    double pi = 3.141592653;
    double R = 0.0;

    scanf("%lf", &R);

    double area = pi * R * R;
    printf("%.9lf\n", area);

    return 0;
}