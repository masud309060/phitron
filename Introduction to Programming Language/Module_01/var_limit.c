#include<stdio.h>


int main() 
{
    int a = 1000000000;
    long long int b = 1000000000000000000;
    printf("%d", a);
    printf("\n%lld", b);

    printf("\n------------------------------\n");

    float c = 100.141678;
    double d = 104578.12345;

    printf("%f \n", c);
    printf("%lf", d);

    return 0;
}