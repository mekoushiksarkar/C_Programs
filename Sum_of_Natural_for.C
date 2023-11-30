#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,s=0;
    //clrscr();
    printf("\n how many times");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    printf("\n s=%d",s);
    return 0;
}