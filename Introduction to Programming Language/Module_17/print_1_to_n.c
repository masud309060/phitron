#include <stdio.h>


void printN(int start, int end) {
    if(end >= start) {
        printf("%d\n", start);
        start++;
        printN(start, end);
    }
}

int main()
{
    printN(1, 10);
    return 0;
}