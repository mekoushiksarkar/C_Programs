#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],c[10][10],i,j,m,n,x,y,k;
clrscr();
/*printf("\n Enter row and column of the first matrix:\n");
scanf("%d%d",&m,&n);*/
printf("\n Enter elements of the matrix:\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
printf("\n The transpose matrix is :\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{
b[i][j]=a[j][i];
printf("\n %d",b[i][j]);
}
for(i=0;i<m;i++)
	for(j=0;j<n;j++)
		{
		c[i][j]=0;
		for(k=0;k<n;k++)
			c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
		}
printf("\n A*At:");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{
printf("\n %d",c[i][j]);
printf("\n");
}
getch();
}
