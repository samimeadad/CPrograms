#include<stdio.h>

int main(void)
{
    int i;
    int num;

    printf("How many loop you want = ");
    scanf("%d", &num);

    printf("\n\n");
    printf("The Result is as follows - \n\n");
    for(i=1; i<=num; i++)
        printf("%d\n", i);

    printf("\n\n");
    return 0;
}
