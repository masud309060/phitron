#include <stdio.h>
#include <math.h>


int main() {
    double x1, x2, y1, y2, distance;

    scanf("%lf %lf", &x1, &x2);
    scanf("%lf %lf", &y1, &y2);

    distance = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    distance = sqrt(distance);

    printf("Distance between the two points is: %0.2lf \n", distance);

    
    return 0;
}