#include<stdio.h>

int main(void)
{
    int a, b, c, d;

    a = sizeof(int);
    b = sizeof(float);
    c = sizeof(double);
    d = sizeof(char);

    printf("The size of integer data type: %d", a);
    printf("\nThe size of float data type: %d", b);
    printf("\nThe size of double data type: %d", c);
    printf("\nThe size of character data type: %d", d);
    printf("\n");

    return 0;
}
