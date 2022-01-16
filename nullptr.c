#include <stdio.h>
int main()
{
    int a = 34;
    int *ptr = NULL;
    if (ptr != NULL)
    {
        printf("%d\n", *ptr);
    }
    else
    {
        printf("The pointer is a null pointer and cannot be dereferenced\n");
    }
    return 0;
}
