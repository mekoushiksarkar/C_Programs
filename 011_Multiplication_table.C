/* Multiplication Table*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,n;
	printf("\n Enter range of Multiplication Table: ");
	scanf("%d",&n);
	a=1;
	do
	{
		printf("\n");
		b=1;
		do
		{
			printf("%d * %d=%d",a,b,a*b);
			printf("\n");
			b++;
		}
		while(b<=10);		
		a++;
		getch();
	}
	while(a<=n);
	return 0;
}
