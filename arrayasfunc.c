#include<stdio.h>
int func1(int x)     // array is passed in func as a parameter//    // call by value //
{
    return x+1;
}


int func2(int* ptr)      // array address is passed in func//    // call by reference //
{
    *ptr= 7;
    return *ptr;
}


int main()
{
    int arr[]={0,1,2,3};

    printf("%d\n", func1(arr[0]));
    printf("%d\n", func2(&arr[3]));
    return 0;
}
