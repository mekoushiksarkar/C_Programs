/*To find the sum of n given numbers*/
#include<stdio.h>
#include<conio.h>
main()
{
    int i,n;
    float a[100],s;
    printf("\n enter how many numbers to add\n");
    scanf("%d",&n);
    printf("\n enter the n number\n");
    for(i=1;i<=n;i++)
    scanf("%f",&a[i]);
    s=0;
    for(i=1;i<=n;i++)
    s=s+a[i];
    printf("\n the sum of n numbers is %f",s);
    return 0;
}