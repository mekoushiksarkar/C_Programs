#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
clrscr();
printf("\n Enter 1st number:");
scanf("%d",&a);
printf("\n Enter 2nd number:");
scanf("%d",&b);
if(a>b)
{
c=--a - b--;
printf("\n 1st number=%d",a);
printf("\n 2nd number=%d",b);
printf("\n Decrement=%d",c);
}
else
{
d=++a + b++;
printf("\n 1st number=%d",a);
printf("\n 2nd number=%d",b);
/*printf("\n Decrement=%d",c);*/
printf("\n Increment=%d",d);
}
getch();
}