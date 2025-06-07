// With argument but no return

#include<stdio.h>

int sum(int,int);

int main()
{
    int m,n;
    printf("\n Enter the value of m,n (Addition):\n");
    scanf("%d%d",&m,&n);
    sum(m,n);
    return 0;
}
int sum(int a,int b)
{
    int c= a+b;
    printf("\n Sum = %d",c);
}
