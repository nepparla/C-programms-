#include <stdio.h>
int main()
{
    int input, num = 0,i;
    scanf("%d", &input);
    for (i = 1; i <= input; i++)
    {
        num = num + i;
    }
    printf("%d",num);
}