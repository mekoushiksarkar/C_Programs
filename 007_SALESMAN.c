/* Find Commision from sales amount */

#include<stdio.h>
#include<conio.h>
int main()
{
    float sales,com;
    printf("\n Enter the sales amount: ");
    scanf("%f",&sales);
    if(sales<100.00)
        com=0.00;
    else if(sales>=100.00 && sales<1000.00)
        com=0.10*sales;
    else
        com=100.00+0.80*(sales-1000.00);
    printf("\n The commision is: %f",com);
    return 0;
}