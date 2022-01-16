#include<stdio.h>
int printnum()
{
    int i;
    printf("Enter a number\n");
    scanf("%d", &i);
    return i;

}
int main()
{   int c;
    c = printnum();
    printf("You have entered %d\n", c);
   return 0;
}