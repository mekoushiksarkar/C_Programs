/*programme to find the value of a function at a point*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
float function(float,int);
int fact(int);
main()
{
	int i,r,n;
	float x,t,f;
	printf("\n put the value of x=\n");
	scanf("%f",&x);
	printf("\n put your roll number r\n");
	scanf("%d",&r);
	t=function(x,r)*fact(r);
	printf("\n value of the function is=%f\n",t);
	getch();
}
float function(float x,int r)
{
	float f;
	f=pow(x,4)+2*fact(r)+1+r;
	return(f);
}
int fact(int r)
{
	int i,value=1;
	for(i=1;i<=r;i++)
		value=value*i;
	return(value);
}
