#include<stdio.h>
int main()
{
    int a=2;
    int* x= &a;
    int* x2= NULL;
    // scanf("%d", &a);
    printf("address of pointer of a or x is: %p\n", &x);
    printf("address of a is: %p\n", &a);
    printf("address of x2 is: %p\n", x2);
    printf("address of a is: %p\n", x);
    printf("a is: %d\n", *x);   // used for knowing the value of the variable pointer has stored the address//
    printf("a is: %d\n", a);
    return 0;
}
