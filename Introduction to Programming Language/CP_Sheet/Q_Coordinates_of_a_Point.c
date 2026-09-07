#include <stdio.h>

int main()
{
    float a, b;

    scanf("%f %f", &a, &b);

    if(a == 0 && b == 0) {
        printf("Origem");
    } else if(a == 0) {
        printf("Eixo Y");
    } else if(b == 0) {
        printf("Eixo X");
    } else if(a > 0) {
        if(b > 0) {
            printf("Q1");
        } else {
            printf("Q4");
        }
    } else if(a < 0) {
        if(b > 0) {
            printf("Q2");
        } else {
            printf("Q3");
        }
    }

    return 0;
}