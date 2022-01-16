#include<stdio.h>          // matrix array //
int main()
{
    int marks[2][4]={{2,3,4,5,},{6,7,8,9}};           // marks[rows][column]={{00,01,02,03};{10,11,12,13}} //
    int i, j;                // i is row //        // j is column //
    for ( i = 0; i < 2; i++)
    {
       for (j = 0; j < 4; j++)
       {
       printf(" %d " , marks[i][j]);
       }
       printf("\n");

    }
    
return 0;
}
