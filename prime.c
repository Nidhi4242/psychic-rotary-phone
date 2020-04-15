#include <stdio.h>
 
int prime(int, int);
 
int main()
{
    int num1, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    i = primeno(num1, num1 / 2);
    if (i == 1)
    {
        printf("the %d is a prime number\n", num1);
    }
    else
    {
        printf("the %d is not a prime number\n", num1);
    }
    return 0;
}
 
int prime(int num1, int num2)
{
    if (num2 == 1)
    {
        return 1;
    }
    else
    {
       if (num1 % num2 == 0)
       {
         return 0;
       }
       else
       {
         return prime(num1, num2- 1);
       }       
    }
}
