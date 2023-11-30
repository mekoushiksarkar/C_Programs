#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],i,j,big,low;
clrscr();
/*printf("\n the dimension:");
scanf("%d",&n);*/
for(i=0;i<=5;i++)
	{
	for(j=0;j<=5;j++)
	{
	printf("\n a[%d][%d]=",i,j);
	scanf("%d",&a[i][j]);
	}
	}
big=0;
for(i=0;i<=5;i++)
	{
	for(j=0;j<=5;j++)
	{
	if(a[i][j]>big)
	big=a[i][j];
	if(a[i][j]<low)
	low=a[i][j];
	}
	}
printf("\n big=%d,low=%d",big,low);
getch();
}