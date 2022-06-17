#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
     fun(n);
}
int fun(int input)
{
    if (input % 2 != 0 && input % 3 != 0 && input != 0)
    {
        // printf("%d is a prime number\n", input);
    }
    else
    {
        // printf("%d is not a prime number\n", input);
    }
}