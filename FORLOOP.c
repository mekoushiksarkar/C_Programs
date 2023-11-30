#include<stdio.h>
#include<conio.h>
void main()
{
int c,d;
clrscr();
for(c=1;c<=20;c++)
{
for(d=20;d>=c;d--)
printf(" 4 ");
printf("\n");
}
getch();
}