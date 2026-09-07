#include<stdio.h>
#include<stdbool.h>

int main() 
{
    int a;
    int b;
    

    scanf("%d", &a);
    scanf("%d", &b);

    bool a_is_multiple_of_b = a % b == 0;
    bool b_is_multiple_of_a = b % a == 0;

    if(a_is_multiple_of_b || b_is_multiple_of_a) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}