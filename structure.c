#include<stdio.h>
struct hello
{
    int id;
    float marks;
    char fav_cha;
}Shubham, Harry, Ravi; 

int main ()
{
    // struct hello Shubham, Harry ,Ravi;
    Shubham.id=1;
    Shubham.marks=23.23;
    Shubham.fav_cha='s';

    Harry.id=2;
    Harry.marks=50.23;
    Harry.fav_cha='h';

    Ravi.id=3;
    Ravi.marks=41.64;
    Ravi.fav_cha='r';
    printf("%c\n", Harry.fav_cha);
    return 0;
} 