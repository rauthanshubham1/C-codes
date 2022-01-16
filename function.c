#include<stdio.h>
int sum(int a, int b);         //error aaiga bcoz function badd ma ha ... but agar ya line likh di to phela declare ho jaiga//
int main()
{
    int a=1;
    int b=2;
    int c=sum(a, b);        // yha sa func line 2 pa jaiga //
    printf("%d\n",c);
    return 0;
}
int sum (a,b)
{
    return a+b ;

}