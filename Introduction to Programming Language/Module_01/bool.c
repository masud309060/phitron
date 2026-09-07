#include <stdio.h>
#include <stdbool.h>

int main() {
    bool isTrue;

    isTrue = true;

    if (isTrue) {
        printf("The value is true.\n");
    } else {
        printf("The value is false.\n");
    }

    printf("The value of isTrue is: %d\n", isTrue);

    return 0;
}