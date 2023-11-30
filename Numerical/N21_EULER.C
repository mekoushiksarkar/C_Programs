#include<stdio.h>
#include<conio.h>
void main()
{
    float x,y,h,n,xf;
    int i;
    float f(float,float);
    clrscr();
    printf("\nEnter the initial x : ");
    scanf("%f",&x);
    printf("\nEnter initial f(x) : ");
    scanf("%f",&y);
    printf("\nEnter h : ");
    scanf("%f",&h);
    printf("\nEnter the value for which you have to find : ");
    scanf("%f",&xf);
    n=(xf-x)/h;
    for(i=1;i<=(int)n;i++)
	{
    	y=y+(h*f(x,y));
    	x=x+h;
	}
    printf("\n\n\nResult is : %f",y);
    getch();
}
float f(float x, float y)
{
 return(1+(x*y));
}

