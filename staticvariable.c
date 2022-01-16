#include <stdio.h>
int func(int z)
{
    static int a = 6;         
    a++;
    return a;
}
int main()
{
    int x ;
    printf("The value of a is %d\n", func(x));
    printf("The value of a is %d\n", func(x));    // func is again called //
    printf("The value of a is %d\n", func(x));    // func is again called //
    return 0;
}
