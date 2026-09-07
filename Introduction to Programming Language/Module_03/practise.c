#include<stdio.h>

int main() {

    for(int i = 8; i <= 200; i = i + 8) {
        printf("%d \n", i);
    }

    printf("------------------- \n");

    for(int i = 100; i >=0; i = i - 1) {
        if(i % 2 != 0) {
            printf("%d \n", i);
        }
    }

    return 0;
}