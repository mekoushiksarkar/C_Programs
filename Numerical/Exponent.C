#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i=1;
	float x,sum=1,term=1;
	clrscr();
	printf("\nEnter the value of x: ");
	scanf("%f",&x);
	do
	{
		term=term*x/i;
		sum=sum+term;
		i=i+1;
	}
	while(fabs(term)>0.00001);
	printf("\nSum of e^%f is : %8.4f,correct upto 4 decimal places.",x,sum);
	getch();
}