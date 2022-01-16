#include<stdio.h>
int main()
{  int a, i;
   printf("Enter a number..\n");
   scanf("%d", &a);
   for ( i = 1; i < 19; i++)
   {
    printf("Loop %d\n", i);   //agar ya line 13th line ma likh di to ya output ma nhi aaiga agar input ma a>10 dala//
    if (i>10)
    {
    break;
    }
   }
   
    return 0;
}
