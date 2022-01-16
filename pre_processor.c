#include <stdio.h>
// #include"danglingptr.c"
#define PI  3.14
#define SQUARE(r)  r*r

int main()
{
    float v = PI;
    int r = 4;

    printf("%f\n", v);
    printf("%f\n", PI * SQUARE(r));
    return 0;
}
