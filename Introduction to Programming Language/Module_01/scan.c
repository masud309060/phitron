#include<stdio.h>


int main() {

    int a;
    float b;
    char c;

    scanf("%d", &a);
    scanf("%f", &b);
    scanf(" %c", &c);
    


    printf("%d %0.2f %c ", a, b, c);
    return 0;
}