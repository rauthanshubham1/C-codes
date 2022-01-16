#include<stdio.h>
int main()
{ int age;
    printf("What is your age?\n");
    scanf("%d", &age);                // by &age we assign the input value as age for program//
    if (age>18)
    {
        printf("Your age id %d so you can vote\n", age);
    }
    else 
    {
        printf("Your age is %d so you cannot vote\n", age);
    }
    
return 0;

}