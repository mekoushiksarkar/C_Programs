/* Swap using Third Variable*/

#include<stdio.h>
#include<conio.h>
int main()
{
    float v1,v2,swap;
    printf("\n Enter the value of the frist variable: ");
    scanf("%f",&v1);
    printf("\n Enter the value of the sceond variable: ");
    scanf("%f",&v2);
    swap=v1;
    v1=v2;
    v2=swap;
    printf("\n After swapping the value of the frist variable is: %f",v1);
    printf("\n After swapping the value of the sceond variable is: %f",v2);
    return 0;
}
