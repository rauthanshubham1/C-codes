#include<stdio.h>

int sum(int a, int b)
{ 
    return a+b;
}
int main()
{
    printf("The sum of 1 and 2 is %d.\n", sum(1,2));
    int (*fptr) (int,int);  // pointer is pointing to that func jo integer return kar ha or do interger leta ha resp //
    fptr=&sum;  // ptr ma address dal dia func ka //
    int d= (*fptr)(4,6);  // dereffrencing a func ptr //
    printf("The value of d is %d.\n",d);
    return 0;

}
