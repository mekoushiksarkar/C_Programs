/* Fibonacci Series using Array */

#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100];
    int x,n;
    printf("Enter no of times to print: ");
    scanf("%d",&n);
    printf("\n Fibonacci series : \n");
    a[0]=0;
    a[1]=1;
    printf("%3d",a[0]);
    printf("%3d",a[1]);
    for(x=2;x<n;x++)
    {
        a[x]=a[x-1]+a[x-2];
        printf("  %3d",a[x]);
    }
    return 0;
}