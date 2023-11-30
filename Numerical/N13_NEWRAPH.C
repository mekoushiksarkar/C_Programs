#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
    int up,i=0,cnt=0;
    int coef[10]={0};
    float x1=0,x2=0,t=0;
    float fx1=0,fdx1=0;
    clrscr();
    printf("\n\n\t\t\t PROGRAM FOR NEWTON RAPHSON GENERAL");
    printf("\n\n\n\t ENTER THE TOTAL NUMBER OF POWER:");
    scanf("%d",&up);
    for(i=0;i<=up;i++)
    {
        printf("\n\t x^%d:",i);
        scanf("%d",&coef[i]);
    }
    printf("\n");
    printf("\n\t THE POLYNOMIAL IS:");
    for(i=up;i>=0;i--)
    {
     printf("%dx^%d",coef[i],i);
    }
    printf("\n\t INITIAL x1--->");
    scanf("%f",&x1);
    printf("\n ***************************************");
    printf("\n ITERATION   x1   fx1   fdx1  ");
    printf("\n ***************************************");
    do
    {
    	cnt++;
    	fx1=fdx1=0;
    	for(i=up;i>=1;i--)
    	{
    		fx1=fx1 + coef[i] * (pow(x1,i));
    	}
    	fx1=fx1+coef[0];
    	for(i=up;i>=0;i--)
    	{
    		fdx1+=coef[i]*(i*pow(x1,(i-1)));
    	}
    	t=x2;
    	x2=(x1-(fx1/fdx1));
    	x1=x2;
    	printf("\n %d %.3f %.3f %.3f",cnt,x2,fx1,fdx1);
    }
    while((fabs(t-x1))>=0.0001);
    printf("\n\t THE ROOT OF EQUATION IS %f",x2);
    getch();
}
