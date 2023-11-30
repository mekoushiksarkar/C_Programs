#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n=2;
double sum=1.0,term;
clrscr();
do
{
term=(1/(float)n);
printf("\n term=%lf",term);
sum=sum+term;
n=n+1;
}
while(fabs(term)>=0.0001);
printf("\n The sum is : %lf",sum);
getch();
}