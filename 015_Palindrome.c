/* To check Number is Palindrome or NOT */

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
        s=(s*10)+r;
        n=n/10;
    }
    if(t==s)
        printf("\n %d is an Palindrome.",t);
    else
        printf("\n %d is not an Palindrome.",t);
    return 0;
}
