#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n=2,fac=2;
float sum=1.0,term,term1;
clrscr();
do
{
term=(pow(n,(n-1)))*(pow(3,(n-1)));
printf("\n term=%f",term);
term1=term/(float)fac;
printf("\n term1=%.4f",term1);
sum=sum+term1;
printf("\n SUM1=%.4f",sum);
n=n+1;
fac=fac*n;
}while(fabs(term1)<=0.0001);
printf("\n sum=%.4f",sum);
getch();
}
/*int fac(int a)
{
if(a==1)
return (a);
else
a=a*fac(a-1);
return (a);
} */