// No argument and No return

#include<stdio.h>

void addition(void);

int main()
{
    addition();           
    return 0;
}
void addition()
{   
	int a,b,c;
    printf("\n Enter the values of a,b (Addition):\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\n Sum = %d",c);
}
