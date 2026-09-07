#include <stdio.h>

// return type + with parameter 
// int isEven(int n) {
//     int reminder = n % 2;
//     return reminder;
// }

// return type + no parameter 
// int isEven() {
//     int n;
//     scanf("%d", &n);
//     int reminder = n % 2;
//     return reminder;
// }

// no return type + parameter 
// void isEven(int n) {
//     int reminder = n % 2;
    
//     if(reminder == 0) {
//         printf("YES - EVEN");
//     } else {
//         printf("NO - ODD");
//     }

//     return;
// }

// no return type + no parameter 
void isEven() {
    int n;
    scanf("%d", &n);

    int reminder = n % 2;
    
    if(reminder == 0) {
        printf("YES - EVEN");
    } else {
        printf("NO - ODD");
    }

    return;
}

int main()
{

    isEven();
    
    return 0;
}