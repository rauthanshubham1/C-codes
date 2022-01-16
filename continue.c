#include<stdio.h>
int main()
{   
    int a, i;
    printf("Enter a number\n");
    scanf("%d", &a);
    for(i=1; i<7 ; i++)
    {
       
        if (i==5)         
        {
         continue;   
        }
        printf("Loop %d\n", i); 
    }
    
    return 0;
}
