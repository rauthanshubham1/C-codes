#include<stdio.h>
#include<string.h>
// void func(char str[])
// {
//     int i=0;
//    while (str[i]!='\0')
//    {
//       printf("%c", str[i] );
//       i++;
//    }
   
// }

int main()
{
    // char str[6]="hello";
    //   or
    //  char str[]={'h','e','l','l','o','\0'}; 
    //  func(str);
    // return 0;
    char str[20];
    gets(str);
    printf("using printf %s \n", str);
    puts(str);
    printf("using puts %s \n", str);
    return 0;


}
