#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float mat[4][4],temp,temp1,x,y,z;
	int i,n,j;
	clrscr();
	printf("\n Enter the size of matrix: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n\n Enter the value of %d equation",i+1);
		for(j=0;j<n;j++)
		{
			printf("\n Enter the value of coefficient %d:",j+1);
			scanf("%f",&mat[i][j]);
		}
		printf("\n Enter the value of constant:");
		scanf("%f",&mat[i][j]);
	}

	printf("\n Your matrix \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n+1;j++)
		{
			printf(" %.3f",mat[i][j]);
		}
	printf("\n");
	}
	printf("\n");

	printf("\nThe upper triangular matrix is:\n");
	temp=mat[1][0]/mat[0][0];
	temp1=mat[2][0]/mat[0][0];
	for(i=0,j=0;j<n+1;j++)
	{
		mat[i+1][j]=mat[i+1][j]-(mat[i][j]*temp);
		mat[i+2][j]=mat[i+2][j]-(mat[i][j]*temp1);
	}
	temp=mat[2][1]/mat[1][1];
	for(i=1,j=0;j<n+1;j++)
	{
		mat[i+1][j]=mat[i+1][j]-(mat[i][j]*temp);
	}
	for(i=0;i<n;i++)
	{
     for(j=0;j<n;j++)
		{
			printf(" %.3f",mat[i][j]);
		}
	 printf("\n");
	}
	z=mat[2][3]/mat[2][2];
	y=(mat[1][3]-mat[1][2]*z)/mat[1][1];
	x=(mat[0][3]-mat[0][2]*z-mat[0][1]*y)/mat[0][0];
	printf("\n\nx=%.3f",x);
	printf("\n\ny=%.3f",y);
	printf("\n\nz=%.3f",z);
	getch();
}


