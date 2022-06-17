#include <stdio.h>
int main()
{
    int a, b, c=1, i;
    printf("ENter the value of a");
    scanf("%d", &a);
    printf("Enter the power of a");
    scanf("%d", &b);
    for (i = 1; i <= b; i++)
    {
        c = a*c;
    }
        printf("%d power %d is %d", a,b,c);

}