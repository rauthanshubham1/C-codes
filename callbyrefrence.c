#include<stdio.h>
int num(int* x)
{
    *x=8;
    return *x;
}
int main ()
{
    int a=7;
    printf("%d\n", num(&a));

    return 0;
}  