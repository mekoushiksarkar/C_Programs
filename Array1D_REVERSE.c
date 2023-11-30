
#include<stdio.h>
#include<conio.h>
void main()
{
int a[5];
int c,y;
clrscr();
printf("\n Enter the dimension:");
scanf("%d",&y);
printf("\n \n Enter &d values:",y);
for(c=1;c<=y;c++)
scanf("%d",&a[c]);
printf("\n Elements of array: \n");
for(c=1;c<=y;c++)
printf("[%d]\t",a[c]);
printf("\n Printing in reverse order: \n");
for(c=y;c>0;c--)
printf("[%d]\t",a[c]);
getch();
}