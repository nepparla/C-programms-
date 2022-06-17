#include <stdio.h>
int main()
{
    int input, i;
    printf("ENter the value of n");
    scanf("%d", &input);
    for (i = 0; i < 10; i++)
    {
        int value=input*i;
        printf("Multiplication of %d is 4*%d is %d\n",input, i,value);
    }
}

