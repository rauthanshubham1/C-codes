#include<stdio.h>
void printstar(int n)       // void is used when we do not have to return anything //
{  
    int i=0;
    for ( ; i < n; i++)
    {
        printf("%c\n", '*');
    }
    
}
int main()
{
    printstar(8);
    return 0;
}
