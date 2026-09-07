#include <stdio.h>
#include <math.h>

int main()
{
    long long int a, b, c, d;

    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    long long ab = b * log(a);
    long long cd = d * log(c);

    if(b * log(a) > d * log(c)) {
        printf("YES");
    } else {
        printf("NO");
    }
    
    return 0;
}