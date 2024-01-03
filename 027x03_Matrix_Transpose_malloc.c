/* Matrix Transpose */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10],  r, c, i, j, *ptr,m;
    printf("\n Enter rows and columns of matrix: \n");
    scanf("%d %d", &r, &c);
    ptr = (int *)malloc(r * c * sizeof(int)); 
    printf("\n Enter elements of matrix: \n");
    for(i=0; i<r; ++i)
    {
        for(j=0; j<c; ++j)
        {
            scanf("%d", &m);
             *(ptr+ i*c + j)=m;
        }
    }
    printf("\n Matrix using pointer is: \n");
    for(i=0; i<r; ++i)
    {
        for(j=0; j<c; ++j)
        {
           printf("%d\t",   *(ptr +i*c + j));
        }
        printf("\n");
    }
    printf("\n Transpose of Matrix:\n");
    for(i=0; i<c; ++i)
    {
        for(j=0; j<r; ++j)
        {
             printf("%d\t",*(ptr +j*c + i));
        }
        printf("\n");
   }
   return 0;
}