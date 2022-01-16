#include<stdio.h>
int main()
{ int a, num=2; 
  printf("Enter a number\n");
  scanf("%d", &a);
  while (num<a)
  { printf("%d\n", num);
    num=num+1;
  }
return 0;
}