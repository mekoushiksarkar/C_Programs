#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("\n A=");
scanf("%d",&a);
printf("\n B=");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("\n a=%d",a);
printf("\n b=%d",b);
getch();
}