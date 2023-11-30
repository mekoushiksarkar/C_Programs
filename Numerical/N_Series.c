/*programme to find the value of 1+x+(x*x)/2+(x*x*x)/6+........ at a point*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int i=0,d;
double p,error,x,sum=1,t=1;
printf("\n put the desire number of decimal places d=\n");
scanf("%d",&d);
printf("\n put the value of x=\n");
scanf("%lf",&x);
error=pow(10,-d);
do
{
t=x*t/(double)(i+1);
sum=sum+t;
p=fabs(t);
i++;
}
while((p>error)&&(i<100));
printf("\n sum is %lf",sum);
printf("\n number of terms to get the required value is %d",i);
getch();
}