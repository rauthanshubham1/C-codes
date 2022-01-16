#include<stdio.h>
int add(int a, int b)    // a and b are formal parameters or formal arguments.. edher x and y ki copy jati ha ,, x and y nhi jata khud //
{
    return (a+b);
}


int main()
{

    int x=3, y=1;               // x and y are actual parameters or arguments //
    printf("%d\n", add(x,y));

    return 0;
}