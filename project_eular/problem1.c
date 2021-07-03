#include<stdio.h>

int main(void)
{
    int n=100;
    int i=0;
    int result=0;

    for(i=1; i<n; i++)
    {
        if(i%3==0 || i%5==0)
            result += i;
    }
    printf("%d\t", result);
    printf("\n");
    return 0;
}