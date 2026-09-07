#include<stdio.h>
#include<math.h>

int main() {
    double a, b, c, A, B, C;

    scanf("%lf %lf %lf", &a, &b, &c);

    A = acos((b*b + c*c - a*a) / (2*b*c));
    B = acos((a*a + c*c - b*b) / (2*a*c));
    C = acos((a*a + b*b - c*c) / (2*a*b));

    printf("Angle A = %0.2lf \n", A);
    printf("Angle B = %0.2lf \n", B);
    printf("Angle C = %0.2lf \n", C);

    double total_radians = A + B + C;

    printf("Angle A = %0.2lf degree \n", A * (180/total_radians));
    printf("Angle B = %0.2lf degree \n", B * (180/total_radians));
    printf("Angle C = %0.2lf degree \n", C * (180/total_radians));


    return 0;
}