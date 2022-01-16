#include<stdio.h>
int main()
{
    int arr[4]={3,4,5,6};
    int* ptr= arr;
    printf("address of first element: %p\n", &arr[0]);
    printf("address of first element: %p\n", arr);
    printf("address of first element: %p\n", ptr);
    printf("address of second element: %p\n", &arr[1]);      // here size of int is adding which is 4 //
    printf("address of second element: %p\n", arr + 1);
    printf("address of third element: %p\n", arr + 2);
    printf("address of fourth element: %p\n", arr + 3);


    printf("value at address of first element: %d\n", *(arr));   
    printf("value at address of second element: %d\n", *(arr+ 1 ));
    printf("value at address of third element: %d\n", *(arr+ 2 ));
    printf("value at address of fourth element: %d\n", *(arr+ 3 ));
    
    printf("value at address of first element: %d\n", *(&arr[0]));   
    printf("value at address of second element: %d\n", *(&arr[1] ));
    printf("value at address of third element: %d\n", *(&arr[2] ));
    printf("value at address of fourth element: %d\n", *(&arr[3] ));
    return 0;
}
