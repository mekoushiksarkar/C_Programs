/* To check Perfect no. */

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,m;
    //clrscr();
    printf("\n Enter the number: ");
    scanf("%d", &n);
    i=1;
    m=0;
    while(i<n)
    {
        if(n%i==0)
        m=m+i;
        i++;
    }
    if(m==n)
        printf("\n %d is a perfect number.",n);
    else
        printf("\n %d is not a perfect number.",n);
    return 0;
}