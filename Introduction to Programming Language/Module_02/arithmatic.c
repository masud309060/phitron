#include<stdio.h>

int main() {

    float a = 15;
    int b = 2;

    int sum = a + b;
    printf("Sum: %d\n", sum);

    int diff = a - b;
    printf("Difference: %d\n", diff);

    int mul = a * b;
    printf("Multiplication: %d\n", mul);

    float div = a / b;
    printf("Division: %0.2f\n", div);

    int mod = (int)a % b;
    printf("Modulus: %d\n", mod);



    return 0;
}