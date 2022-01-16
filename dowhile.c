#include <stdio.h>
int main()
{
    int num, a = 2;
    printf("Enter a number....\n");
    scanf("%d", &num);
    do
    {   a=a+1;
        printf("%d\n", a);
        // a = a * 2;
    } while (a < num);
    return 0;
}