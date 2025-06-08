// With argument and with return

#include<stdio.h>

int sum(int,int);

int main()
{
    int m,n;
    printf("\n Enter the value of m,n (Addition):\n");
    scanf("%d%d",&m,&n);
    int add= sum(m,n);
    printf("\n Sum = %d",add);
    return 0;
}
int sum(int a,int b)
{
    int c= a+b;
    return c;
}
