#include <stdio.h>
int main()
{
    int input;
    printf("Enter the value");
    scanf("%d", &input);
    if (input % 2 != 0 && input % 3 != 0 && input!=1)
    {
        printf("%d  is Prime\n", input);
    }
    else{
        printf("%d is not a prime Number\n",input);
    }
    return 0;
}