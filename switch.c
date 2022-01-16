#include<stdio.h>
int main()
{ int a, b;
    printf("Enter your roll number.\n");
    scanf("%d", &a);
    printf("are u in 1st or 2nd or 3rd class\n");
    scanf("%d", &b);
switch (a)                // a must be a integer or character ... it should not be a float or etc//
{
case 10:
    printf("Your roll number is %d\n", a);               
    switch (b)
    {
        case 1:                                    /* this is nested switch statement which is statement ka ander statement */
    printf("You are in %d\n", b);
    break;
    case 2:
    printf("You are in %d\n", b);
    break;
    case 3:
    printf("You are in %d\n", b);
    default:
    printf("Your are not in class 1 or 2 or 3\n");
    }

 break;   
case 20:
    printf("Your roll number is %d\n", a);
    break;
case 30:
    printf("Your roll number is %d\n", a);
    break;
default:
    printf("Your roll number is %d not 10 or 20 or 30\n", a);
    break;
}
return 0;
}