#include <stdio.h>

int main() {
    double pi = 3.141592653;
    double R;

    if (scanf("%lf", &R) == 1) {
        printf("%.9lf\n", pi * R * R);
    }

    return 0;
}