#include<stdio.h>
int main()
{
    int a=4;
    float b=7.333;    // there are 5 character as dot is also a character//
    printf("The value of a is %d\n", a);
    printf("The value of b is %4.2f\n", b);
    printf("%1.4f\n", b);           // character also include dot//
    printf("%2.4f\n", b);           // character also include dot//
    printf("%3.4f\n", b);           // character also include dot//
    printf("%4.4f\n", b);           // character also include dot//
    printf("%5.4f\n", b);           // character also include dot//
    printf("%6.4f\n", b);           // character also include dot//
    printf("%7.4f\n", b);           // character also include dot//
    printf("%8.4f\n", b);           // character also include dot//
    printf("%9.4f\n", b);           // character also include dot//
    printf("%10.4f\n", b);          // character also include dot//
    printf("%-7.3fhello \n", b);          // character also include dot//
    printf("%-2.4f\n", b);          // character also include dot//
    printf("%-3.4f\n", b);          // character also include dot//
    printf("%-4.4f\n", b);          // character also include dot//
    printf("%-5.4f hllo\n ", b);          // character also include dot//
    printf("%-6.4f\n", b);          // character also include dot//
    printf("%10.1f\n", b);          // character also include dot//
    printf("%10.2f\n", b);          // character also include dot//
    printf("%10.3f\n", b);          // character also include dot//
    printf("%10.4f\n", b);          // character also include dot//
    printf("%10.5f\n", b);          // character also include dot//
    printf("%10.6f\n", b);          // character also include dot//

}
// first number represents the character spaces and second number after point represents number of character after point//