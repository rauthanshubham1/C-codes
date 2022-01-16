#include <stdio.h>
int main()
{
    printf("The file name is %s\n", __FILE__);
    printf("Today's date is %s\n", __DATE__);
    printf("Time is %s\n", __TIME__);
    printf("Line number is %d\n", __LINE__);
    printf("ANSI: %d\n", __STDC__);
    return 0;
}
