#include <stdio.h>

int main()
{
    float n;

    scanf("%f", &n);

    int int_part = (int)n;
    float float_part = n - int_part;

    if(float_part == 0) {
        printf("int %d", int_part);
    } else {
        printf("float %d %0.3f", int_part, float_part);
    }

    return 0;
}