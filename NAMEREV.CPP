#include<stdio.h>
#include<curses.h>
#include<string.h>

int main(void)
{
	char name[100], rev[100];
	int i, len;

	//input name
	printf("Please insert your name and place ENTER: ");
	for(i=0; i<100; i++)
	{
		scanf("%c", &name[i]);
		if(name[i]==10)
            break;
	}

	len = strlen(name);

    //reverse the name in another array
	for(i=0; i<len; i++)
	{
        rev[len-i-1] = name[i];
	}

	//print the name in straight order
	i=0;
	printf("\n\nYour Name in Straight Order: ");
	for(i=0; i<len; i++)
    {
        printf("%c", name[i]);
    }

	//print the name in reverse order
    i=0;
	printf("\n\nYour Name in Reverse Order: ");
	for(i=0; i<len; i++)
	{
		printf("%c", rev[i]);
	}
	printf("\n\n");
	return 0;
}
