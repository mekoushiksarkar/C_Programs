/* Matrix Multiplication */

#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int i,j,k,m,n,o,p;
	printf("\n The number of Rows and Columns of 1st Matrix:\n");
	scanf("%d %d",&m,&n);
	printf("\n Enter elements of 1st Matrix:\n");
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			scanf("%d",&a[i][j]);
	printf("\n Enter the number of Rows and Column of 2nd Matrix:\n");
	scanf("%d%d",&o,&p);
	printf("\n Enter elements of 2nd Matrix:\n");
	for(i=0; i<o; i++)
		for(j=0; j<p; j++)
			scanf("%d",&b[i][j]);
	if(n==o)
	{
		for(i=0; i<m; i++)
			for(j=0; j<p; j++)
			{
				c[i][j]=0;
				for(k=0; k<n; k++)
				c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
			}
	}
	else
	{
		printf("\n The matrices are not conformable for multiplication.");
		return 0;
	}
	printf("\n *** The resultant matrix ***\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<p; j++)
			printf("%4d",c[i][j]);
		printf("\n");
	}
	return 0;
}
