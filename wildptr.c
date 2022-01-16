#include<stdio.h>
int main()
{
    int a=24;
    int* ptr;    // this is a wild ptr //
    ptr=&a;      // now it is no longer a wild pointer //
    printf("%d\n", *ptr);
    return 0;
}
