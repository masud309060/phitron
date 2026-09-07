#include <stdio.h>
#include <string.h>

int is_palindrome(char str[]) {
    int flag = 1;

    int length = strlen(str);

    for (int i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - 1 - i]) {
            flag = 0;
            break;
        }
    }
    
    return flag;
}

int main()
{

    char str[1001];
    scanf("%s", str);

    int palin = is_palindrome(str);

    if(palin == 1) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }
    
    return 0;
}