
#include <stdio.h>
int main()
{
    printf("%d",fun(4));
}
int fun(int value)
{
    if (value == 0)
    {
        return 1;
    }
    else
    {
        return value * fun(value - 1);
    }
}