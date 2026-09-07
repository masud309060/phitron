// // this not works on codeforces
// #include <stdio.h>

// int main()
// {
//     int n, a;

//     scanf("%d %d", &n, &a);

//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += a % 10;
//         a /= 10;
//     }

//     printf("%d", sum);
    
//     return 0;
// }

// this works on codeforces
// int data type can not take 10^6 length input 
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char str[n + 1];
    scanf("%s", str);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int val = str[i] - '0';
        sum += val;
    }

    printf("%d", sum);
    
    return 0;
}