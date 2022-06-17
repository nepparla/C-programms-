#include <stdio.h>
int main()
{
    int input, i;
    printf("Enter the value ");
    scanf("%d", &input);
    printf("Factors  of %d are :",input);
    
        for (i = 1; i <= input; i++)
        {
            if (input % i == 0)
            {
                printf("%d ", i);
            }
            
        }
    
}