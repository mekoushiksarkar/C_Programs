#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a[3][3],inv[3][3],det,i,j,p,r,q,s,t,u,v,w,x;
clrscr();
printf("\n Enter the elements of the matrix:\n");
{
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
scanf("%4d",&a[i][j]);
}
det=(a[0][0]*((a[1][1]*a[2][2])-(a[2][1]*a[1][2])))-(a[0][1]*((a[2][0]*a[1][2])-(a[1][0]*a[2][2])))+(a[0][2]*((a[1][0]*a[2][1])-(a[1][1]*a[2][0])));
}/*
if(det==0)
{
printf("\n The inverse of the matrix cannot be determine");
}
else
{
a[0][0]=((a[1][1]*a[2][2])-(a[2][1]*a[1][2]));
a[0][1]=-((a[0][1]*a[2][2])-(a[2][1]*a[0][2]));
a[0][2]=((a[0][1]*a[1][2])-(a[1][1]*a[0][2]));
a[1][0]=-((a[1][0]*a[2][2])-(a[2][0]*a[1][2]));
a[1][1]=((a[0][0]*a[2][2])-(a[2][0]*a[0][2]));
a[1][2]=-((a[0][0]*a[1][2])-(a[1][0]*a[0][2]));
a[2][0]=((a[1][0]*a[2][1])-(a[2][0]*a[1][2]));
a[2][1]=-((a[0][0]*a[2][1])-(a[2][0]*a[0][1]));
a[2][2]=((a[0][0]*a[1][1])-(a[1][0]*a[0][1]));
p=a[0][0];
q=a[0][1];
r=a[0][2];
s=a[1][0];
t=a[1][1];
u=a[1][2];
v=a[2][0];
w=a[2][1];
x=a[2][2];
printf("\n The inverse of the matrix:\n");
printf("%4d %4d %4d",&p,&q,&r);
printf("\n");
printf("%4d %4d %4d",&s,&t,&u);
printf("\n");
printf("%4d %4d %4d",&v,&w,&x);
printf("\n");
}*/
printf("\n The determinant of the matrix:%d",det);
getch();
}


