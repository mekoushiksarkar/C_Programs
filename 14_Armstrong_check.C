/* Check Armstrong or NOT */

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,t,s,r;
    printf("\n Enter the number: ");
    scanf("%d", &n);
    t=n;
    s=0;
    while(n>0)
    {
        r=n%10;
        s=s+(r*r*r);
        n=n/10;
    }
    if(t==s)
        printf("\n %d is an Armstrong number.",t);
    else
        printf("\n %d is not an Armstrong number.",t);
    return 0;
}