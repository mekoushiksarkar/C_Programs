/* Calculate Basic salary to Net salary*/

#include<stdio.h>
#include<conio.h>
int main()
{
    float basic,da,hra,ins,pf,gross,net;
    printf("\n Enter the basic salary: ");
    scanf("%f",&basic);
    da=basic*0.50;
    hra=basic*0.15;
    gross=basic+da+hra;
    ins=500.00;
    pf=basic*0.12;
    net=gross-(ins+pf);
    printf("\n The net salary is: %f",net);
    return 0;
}
