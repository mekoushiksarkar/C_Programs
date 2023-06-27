/* Addition of Two Matrix */

#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,m,n,x,y;
    printf("\n Enter row and column of the first matrix: \n");
    scanf("%d %d",&m,&n);
    printf("\n Enter row and the column of the second martix: \n");
    scanf("%d %d",&x,&y);
    if((m!=x) || (n!=y))
        {
        printf("\n Matrices can not be added:");
        return 0;
        }
    printf("\n *** Matrices can be added ***");
    printf("\n Enter elements of first matrix: \n");
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    printf("\n Enter the elements of second matrix: \n");
    for(i=0; i<x; i++)
        for(j=0; j<y; j++)
            scanf("%d",&b[i][j]);
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            c[i][j]=a[i][j]+b[i][j];
    printf("\n *** Display the first matrix ***\n");
    for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
                printf("%4d",a[i][j]);
            printf("\n");
        }
    printf("\n *** Display the second matrix ***\n");
    for(i=0; i<x; i++)
        {
            for(j=0; j<y; j++)
                printf("%4d",b[i][j]);
            printf("\n");
        }
    printf("\n *** Display the resultant matrix ***\n");
    for(i=0; i<x; i++)
        {
            for(j=0; j<y; j++)
                printf("%4d",c[i][j]);
            printf("\n");
        }
    return 0;
}
