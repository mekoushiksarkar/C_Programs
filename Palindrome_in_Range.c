#include<stdio.h>
#include<conio.h>
int main()
{
    int n,s,r,i,t,ran;
    printf("\n Enter the range to check palindrome number: ");
    scanf("%d",&ran);
    t=n;
    printf("\n Palindrome numbers are: ");
    for(i=1;i<ran;i++)
    {
    n=i;
    t=n;
    s=0;
    while(n>0)
        {
        r=n%10;
        s=(s*10)+r;
        n=n/10;
        }
        if(t==s)
            printf(" %4d ",t);
    }
    return 0;
}