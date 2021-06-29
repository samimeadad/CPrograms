#include<stdio.h>
#include<conio.h>

int main(void)
{
    int len, i;

    printf("Please insert how many numbers you want = ");
    scanf("%d", &len);

    int num[len];
    int rev[len];

    //input the numbers in the array
    for(i=0; i<len; i++)
    {
        printf("Please enter the number in position %d: ", i+1);
        scanf("%d", &num[i]);
    }

    //printing straight
    i=0;
    printf("\n\nThe straight order of the numbers are:\n");
    for(i=0; i<len; i++)
    {
        printf("%d ", num[i]);
    }

    //reverse the array
    i=0;
    for(i=0; i<len; i++)
    {
        rev[len-i-1] = num[i];
    }

    //printing reverse
    i=0;
    printf("\n\nThe reverse order of the numbers are:\n");
    for(i=0; i<len; i++)
    {
        printf("%d ", rev[i]);
    }
    printf("\n\n");

    return 0;
}
