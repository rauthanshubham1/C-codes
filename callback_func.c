#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

void greethello(int (*fptr)(int, int))
{
    printf("Hello Shubham.\n");
    printf("The sum of 3 and 4 is %d.\n", fptr(3, 4));
}

void greetgoodmorning(int (*fptr)(int, int))
{
    printf("Good Morning Shubham.\n");
    printf("The sum of 1 and 6 is %d.\n", fptr(1, 6));
}
int main()
{
    int (*ptr)(int, int);
    ptr=&sum;
    greetgoodmorning(ptr);
    return 0;
}
