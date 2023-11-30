#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=1;
double sum=0;
clrscr();
printf("\n Enter number:");
scanf("%d",&n);
while(i<=n)
{
printf("\n The even number are:%d",i);
sum=sum+i;
/*printf("\n sum=%d",sum);*/
i=i+2;
}
printf("\n sum=%lf",sum);
getch();
}