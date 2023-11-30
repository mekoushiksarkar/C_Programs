/*details of a rectangle*/
#include<stdio.h>
#include<conio.h>
void main()
{
float no1,no2,peri,area;
clrscr();
printf("\n length of the rectangle:",no1);
scanf("%f",&no1);
printf("\n width of the rectangle:",no2);
scanf("%f",&no2);
peri=2*(no1+no2);
area=no1*no2;
printf("\n perimeter of the rectangle:%.4f",peri);
printf("\n area of the rectangle:%.4f",area);
getch();
}