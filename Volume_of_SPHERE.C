/*info of sphere*/
#include<stdio.h>
#include<conio.h>
void main()
{
float R,sur,vol;
clrscr();
printf("\n radius of the sphere:");
scanf("%f",&R);
sur=4*3.14*R*R;
vol=(4*3.14*R*R*R)/3;
printf("\n surface of the sphere:%.2f",sur);
printf("\n volume of the sphere:%.2f",vol);
getch();
}