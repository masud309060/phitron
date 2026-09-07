#include <stdio.h>
#include <string.h>


int main()
{
    char s[1001];
    scanf("%s", s);

    int size = strlen(s);
    int palin = -1;


    for (int i = 0; i < size/2; i++)            
    {
        if(s[i] != s[size - 1 - i]) palin = 1;
    }

    if(palin == 1) {
        printf("NO");
    } else {
        printf("YES");
    }
    
    return 0;
}