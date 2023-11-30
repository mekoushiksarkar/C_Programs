#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a[10][10],b[10][10],c[10][10],i,j,k,m,n,o,p;
clrscr();
printf("\n 1st row column:");
scanf("%d%d",&m,&n);
printf("\n 1st matrtix:");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
printf("\n 2nd row column:");
scanf("%d%d",&o,&p);
printf("\n 2nd matrix:");
for(i=0;i<o;i++)
for(j=0;j<p;j++)
scanf("%d",&b[i][j]);
if(n!=0)
{
for(i=0;i<m;i++)
for(j=0;j<p;j++)
{
	c[i][j]=0;
	for(k=0;k<n;k++)
	{
	c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
	}
}
}
else
{
printf("\n not exist");
}
printf("\n result:");
for(i=0;i<m;i++)
{
for(j=0;j<p;j++)
printf("%4d",c[i][j]);
printf("\n");
}
getch();
}