#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char number[1000001];

    scanf("%s", number);


    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int val = number[i] - '0';
        sum += val;
    }

    if(sum % 3 == 0) {
        printf("YES");
    } else {
        printf("NO");
    }
    
    return 0;
}