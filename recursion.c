#include<stdio.h>        // factorial //
int factorial(number)
{
    if (number==0 || number==1)
    {
        return 1;
    }
    else
    {
    return (number*factorial(number-1)); 
    }
}
int main()
{   
    int x; 
    printf("Enter a number you want factorial of:\n");
    scanf("%d", &x);
    printf("The factorial of %d is %d\n", x, factorial(x) );
    return 0;
}