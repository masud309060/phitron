#include <stdio.h>

int main()
{
    double PI = 3.141592653;
    double r;
    
    scanf("%lf", &r);

    printf("%0.9lf", PI * r * r);
    return 0;
}