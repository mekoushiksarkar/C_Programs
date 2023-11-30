/*programme to find the roots of a quadratic equation*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
float a,b,c,d,x1,x2,R,I;
printf("\n enter the real values of the coefficients a,b,c\n");
scanf("%f%f%f",&a,&b,&c);
if(a==0)
printf("\n the equation is not quadratic as a=0.\n");
else
{
printf("\n the coefficients of the given quadratic equation \n");
printf("are %f,%f and %f respectively\n\n",a,b,c);
d=b*b-4.0*a*c;
if(d>=0)
{
x1=(-b-sqrt(d))/(2.0*a);
x2=(-b+sqrt(d))/(2.0*a);
printf("\n\n the real roots are %f%f",x1,x2);
}
else
{
R=-b/(2.0*a);
I=sqrt(-d)/(2.0*a);
printf("\n\n the imaginary roots are %f+i%f,%f-i%f",R,I,R,I);
}
}
getch();
}

