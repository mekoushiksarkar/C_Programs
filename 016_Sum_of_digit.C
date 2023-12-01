/* SUM of Digits */

#include<stdio.h>
#include<conio.h>
int main()
{
    int r,s;
    long int n;
    printf("\n Enter the long integer number: ");
    scanf("%ld",&n);
    s=0;
    while(n>0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    printf("\n The sum of the digits is: %d",s);
    return 0;
}
