#include <stdio.h>

int main()
{
    char f1[101], s1[101];
    char f2[101], s2[101];

    scanf("%s %s", f1, s1);
    scanf("%s %s", f2, s2);

    int brother = 1;

    for (int i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
        if(s1[i] != s2[i]) brother = -1;
    }
    

    if(brother == 1) {
        printf("ARE Brothers");
    } else {
        printf("NOT");
    }


    return 0;
}