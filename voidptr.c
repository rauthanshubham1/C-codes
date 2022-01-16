#include <stdio.h>
int main()
{
    int a = 342;
    float b = 7.34;
    void *ptr;


    printf("%p\n", &a);
    printf("%p\n", &ptr);

    // printf("%d", *ptr);                 // error bcoz we havnt typecasted yet //
    

    ptr = &a;                           // here we stored address of int a//
    printf("%d\n", *(  (int *)ptr)  );  // fist star is for value and inside the brakcet we typecasted that "ptr u r a int point"/
    
    
    ptr = &b;                           //here we stored address of float ha
    printf("%f\n", *(  (float *)ptr)  );// fist star is for value and inside the brakcet we typecasted that "ptr u r a float point"
    return 0;
}