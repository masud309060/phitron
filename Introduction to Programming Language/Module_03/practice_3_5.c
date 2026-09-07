// #include<stdio.h>

// int main() {

//     printf("I Love Practice");
//     return 0;
// }

// #include<stdio.h>

// int main() {

//     int A;
//     int B;

//     scanf("%d", &A);
//     scanf("%d", &B);

//     printf("%d", A + B);
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     int A;
//     long long B;
//     float C;
//     char D;

//     scanf("%d %ld %f %c", &A, &B, &C, &D);

//     printf("%d \n", A);
//     printf("%ld \n", B);
//     printf("%0.2f \n", C);
//     printf("%c", D);

//     return 0;
// }

// #include<stdio.h>

// int main() {

//     int n;
//     scanf("%d", &n);

//     for(int i = 1; i <= n; i++) {
//         printf("I Love Practice \n");
//     }
    
//     return 0;
// }

#include<stdio.h>

int main() {
    int n;
    
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(i % 5 == 0) {
            printf("%d Yes \n", i);
        } else {
            printf("%d No \n", i);
        }
    }

    return 0;
}