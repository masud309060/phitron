#include <stdio.h>
#include <string.h>

int countVowels(char str[], int size) {
    if(size == 0) return 0;

    char v = str[size - 1];
        if(v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u' || v == 'A' || v == 'E' || v == 'I' || v == 'O' || v == 'U') {
            return 1 + countVowels(str, size - 1);
        } else {
            return countVowels(str, size - 1);
        }
}

int main()
{
    char str[201];

    fgets(str, sizeof(str), stdin);

    int count = countVowels(str, strlen(str));
    printf("%d", count);

    return 0;
}