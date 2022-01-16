#include<stdio.h>

int func(int a)
{
    static int x;
    x++;
   printf("%d\n",x);
   return x;
   
}

int main()
{
    register int sum=func(1);
    sum=func(1);
    sum=func(1);
    sum=func(1);
   
    return 0;
}
