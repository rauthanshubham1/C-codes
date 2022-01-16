#include <stdio.h>
#include <stdlib.h>

// int *func()           // int* bcoz it will return address //
// {
//     int a = 34;
//     return &a;
// }
int main()
{
    // case 1: deallocation of memory block //
    // int *ptr;
    // ptr = (int *)malloc(7 * sizeof(int));
    // ptr[0] = 10;
    // ptr[1] = 11;
    // ptr[2] = 12;
    // ptr[3] = 13;
    // ptr[4] = 14;
    // ptr[5] = 15;
    // ptr[6] = 16;
    // free(ptr);      // ptr is dangling ptr //
    
    
    // case 2: function returning local variable //
    // int* ptr= func();
    // printf("%d\n", *ptr );    // error bcoz 'a' was a local variable and after returning value it func get destroyed so ptr get dangleing //   // ptr is dangling ptr //
    
    // case 3: if a variable get out of scope //
    int * hello;
    {
        int x=13;
        hello=&x;
    }
        //here varible goes out of scope which means that ptr is pointing at that location which is freed//
    return 0;

}
