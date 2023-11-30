#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n=2;
double sum=1.0,fac=2.0,term;
clrscr();
do
{
term=(1/(double)fac);
printf("\n term=%lf",term);
sum=sum+term;
printf("\n sum=%lf",sum);
n=n+1;
fac=fac*(n);
}
while(term>0.001);
printf("\n the sum is=%lf",sum);
getch();
}