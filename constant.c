#include<stdio.h>
#define PI 3.14
int main()
{
    int a=23;
     const float b= 4.254;
     float b=6.353;           //error is bcoz in 5th statement we made b as constant and we cannot change its value// 
     PI= 234.234;
     
    printf("The value of a is %.3f\n", b);
    printf("The value is %f", PI);   //error bcoz in 2nd line it have defined value and is preproceeded statement//


    return 0;
}