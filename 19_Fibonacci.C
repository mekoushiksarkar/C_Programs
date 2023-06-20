/* Fibonacci Series */

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a,b,c,n;
    printf("\n Enter the range: ");
    scanf("%d",&n);
    a=0;
    b=1;
    printf("\n Fibonacci Series: ");
    printf("%d",a);
    printf("\t%d",b);
    c=0;
    while(c<=n)
    {
        c=a+b;
        if(c<=n)
        printf("\t%d",c);
        a=b;
        b=c;
    }
    return 0;
}