#include <stdio.h>
#include <stdlib.h>
int main()
{
    int k;
    printf("Enter the size of array:\n");
    scanf("%d", &k);
    int *p;
    p = (int *)calloc(k, sizeof(int)); // or malloc//
    for (int i = 1; i < k + 1; i++)
    {
        printf("Enter the value of element %d of the array\n", i);
        scanf("%d", &p[i]);
    }
    for (int i = 1; i < k + 1; i++)
    {
        printf("The value of element %d in the array is %d\n", i, p[i]);
    }
    // use of realloc //

    int n;
    printf("Enter the size of new array:\n");
    scanf("%d", &n);
    p = (int *)realloc(p, n * sizeof(int));
    for (int i = 1; i < n + 1; i++)
    {
        printf("Enter the value of element %d of the array\n", i);
        scanf("%d", &p[i]);
    }
    for (int i = 1; i < n + 1; i++)
    {
        printf("The value of element %d in the array is %d\n", i, p[i]);
    }

    free(p);

    return 0;
}