#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float a,b,h,x,y,y0,yn,xn,r,s,n,i;
    float f(float);
    clrscr();
    printf("\n\nEnter the lower limit:");
    scanf("%f",&a);
    printf("\n\nEnter the upper limit:");
    scanf("%f",&b);
    printf("\n\nEnter the interval:");
    scanf("%f",&n);
    h=(b-a)/n;
    y0=f(a);
    yn=f(b);
    x=a+h;
    s=0;
    for(i=1;i<=(n-1);i++)
    {
        printf("\n y%d=%f",i,s);
        y=f(x);
        s=s+y;
        x=x+h;
    }
    r=(h/2)*((y0+yn)+(2*s));
    printf("\n\nThe result is:%f",r);
    getch();
}
float f(float x)
{
    return (1/(1+x*x)); //return (4*x-(3*x*x))
}
