#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    char string[64]="my bro";
    //*** reading a file ***//
    ptr = fopen("myfile.txt", "r");
    fscanf(ptr,"%s", string);
    printf("The content of this file has %s\n",string);

    //*** writing a file ***//
    // ptr=fopen("myfile.txt","a");  // it will write only one time as it is written "w" but if there is "a" which is append the string will repeat in file  on every run.//     
    // fprintf(ptr,"%s\n",string);    
    // fclose(ptr);
    
    return 0;
}
