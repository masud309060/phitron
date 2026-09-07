#include <stdio.h>
#include <limits.h>

int main()
{

    char str[1000001];
    scanf("%s", str);

    int n_of_e = 0;
    int n_of_g = 0;
    int n_of_y = 0;
    int n_of_p = 0;
    int n_of_t = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'e' || str[i] == 'E') n_of_e++;
        else if(str[i] == 'g' || str[i] == 'G') n_of_g++;
        else if(str[i] == 'y' || str[i] == 'Y') n_of_y++;
        else if(str[i] == 'p' || str[i] == 'P') n_of_p++;
        else if(str[i] == 't' || str[i] == 'T') n_of_t++;
    }

    int min = INT_MAX;

    if(n_of_e < min) min = n_of_e;
    if(n_of_g < min) min = n_of_g;
    if(n_of_y < min) min = n_of_y;
    if(n_of_p < min) min = n_of_p;
    if(n_of_t < min) min = n_of_t;

    printf("%d", min);

    return 0;
}