#include <stdio.h>
int main()
{
    int input;
    scanf("%d",&input);
    printf("%d", Fun(input));
}
int Fun(int value)
{
    int i, fact = 1;
    for (i = 1; i <= value; i++)
        fact = fact * i;
    return fact;
}