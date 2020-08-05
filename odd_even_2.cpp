#include<stdio.h>
#include<string.h>

int main()
{
    int loop, i, len;
    char num[101];

    printf("How many times you want to check the number: ");
    scanf("%d", &loop);

    for(i=0; i<loop; i++)
    {
        printf("Please enter a number: ");
        scanf("%s", &num);

        len=strlen(num);

        if(num[len-1]%2==0)
            printf("EVEN!\n");
        else
            printf("ODD!\n");
    }
    return 0;
}
