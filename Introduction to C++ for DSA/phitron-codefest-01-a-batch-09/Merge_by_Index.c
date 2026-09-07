#include <stdio.h>
#include <string.h>

int main()
{
    char s1[1001], s2[1001];
    int start, end;

    scanf("%s %s", s1, s2);
    scanf("%d %d", &start, &end);

    printf("%s", s1);

    int s2Length = strlen(s2);

    if(s2Length - 1 < end) end = s2Length - 1;

    for (int i = start; i <= end; i++)
    {

        printf("%c",  s2[i]);
    }

    return 0;
}