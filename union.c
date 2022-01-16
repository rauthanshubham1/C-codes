#include<stdio.h>
#include<string.h>
int main (){
    union info       //we will get only one correct and rest wrong value as at a time there is only one memory location which is shared //
    {
        int id;
        float marks;
        char favc;
        char name[34];
    }s1;
    
    strcpy(s1.name,"Shubham");
    s1.favc='f';
    s1.id=2;
    s1.marks=34.23;       // the code in this line will only be shown correct //

    printf("The id is %d\n", s1.id);
    printf("The marks is %0.2f\n", s1.marks);
    printf("The favc is %c\n", s1.favc);
    printf("The id is %s\n", s1.name);
    
    
    
    return 0;
}