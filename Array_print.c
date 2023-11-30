#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a[5];
    clrscr();
    printf("\n Enter ele:\n");
    for(i=0;i<5;i++)
    {
        printf("\n %d element:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
     printf("\n a[%d] = %d",i,a[i]);
    }
    getch();
}
