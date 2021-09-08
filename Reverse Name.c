#include<stdio.h>
//#include<conio.h>

int main(void)
{
    int len, i;

    printf("Please insert how many numbers you want = ");
    scanf("%d", &len);

    int num[len];

    for(i=0; i<len; i++)
    {
        printf("Please enter the number in position %d: ", i+1);
        scanf("%d", &num[i]);
    }

    i=0;
    //printing straight
    printf("\n\nThe straight order of the numbers are:\n");
    for(i=0; i<len; i++)
    {
        printf("%d ", num[i]);
    }

    i=0;
    //printing reverse
    printf("\n\nThe reverse order of the numbers are:\n");
    for(i=len-1; i>=0; i--)
    {
        printf("%d ", num[i]);
    }
    printf("\n\n");

    return 0;
}
