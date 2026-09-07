#include<stdio.h>

int main()
{
    int i=0;
    for(i=1;i<=10;i++)
    {
        if(i%2==0)
        {
            printf("%d \t - even \n",i);
        }
        else
        {
            printf("%d \t - odd \n",i);
        }

        if(i == 5)
        {
            break;
        }
    }
    return 0;
}