/*HIGHST NUMBER USING CONDITIONAL OPERATOR*/
#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c;
clrscr();
printf("\n Enter 1st Number:");
scanf("%f",&a);
printf("\n Enter 2nd Number:");
scanf("%f",&b);
c=a>b ? a : b;
printf("\n high=%.2f",c);
getch();
}