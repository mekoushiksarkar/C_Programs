/* First 100 no. Divisible by 10 */

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    n=10;
    printf("\n The numbers are: ");
    for(i=1;i<=100;i++)
    {
        printf("%d",n);
        n=n+10;
        printf("\t");
    }
    return 0;
}