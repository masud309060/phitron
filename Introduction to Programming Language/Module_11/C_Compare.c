#include <stdio.h>
#include <string.h>

int main()
{
    char a[21], b[21];

    scanf("%s %s", a, b);

    int val = 0;
    int i = 0;

    while(i <= 21) {
        if(a[i] == '\0' && b[i] == '\0') {
            val = 0;
            break;
        } else if(a[i] == '\0') {
            val = -1;
            break;
        } else if(b[i] == '\0') {
            val = 1;
            break;
        } else if(a[i] < b[i]) {
            val = -1;
            break;
        } else if(a[i] > b[i]) {
            val = 1;
            break;
        } else if(a[i] == b[i]) {
            i++;
        }
    }

    if(val < 0) {
        printf("%s", a);
    } else {
        printf("%s", b);
    }

    return 0;
}