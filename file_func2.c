#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "r+"); // when we use putf change the mode to w //
    // char c=fgetc(ptr);
    // printf("The character i read was %c.\n", c);
    // c=fgetc(ptr);
    // printf("The character i read was %c.\n", c);
    // fclose(ptr);

    // char str[4];
    // fgets(str, 3, ptr);     // jitne character read karne ha + 1(null character) = n // 
    // printf("the string is: %s\n", str);

    fputc('c', ptr);
    fputs("This is mee.", ptr);
    fclose(ptr);

    return 0;
}
