#include<stdio.h>

int main (void)
{
    int num, loop, i;

    printf("How many time you want to check: ");
    scanf("%d", &loop);

    for(i=0; i<loop; i++)
    {
        printf("\nPlease Enter the Number: ");
        scanf("%d", &num);
        if(num%2==0)
            printf("EVEN!\n");
        else
            printf("ODD!\n");
    }
    return 0;
}
