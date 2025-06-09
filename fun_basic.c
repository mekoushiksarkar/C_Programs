// Use of Functions

#include<stdio.h>

void addition(void);
void subtraction(void);
void multiplication(void);
void division(void);

int main()
{
    addition();
    subtraction();
    multiplication();
    division();            
    return 0;
}
void addition()
{   
	int a,b,c;
    printf("\n ------------- (Addition) -------------\n");
    printf("\n Enter the values of a: ");
    scanf("%d",&a);
    printf("\n Enter the values of b: ");
    scanf("%d",&b);
    c=a+b;
    printf("\n Sum = %d \n",c);
}
void subtraction()
{   
	int a,b,c;
	printf("\n ------------- (Subtraction) -------------\n");
    printf("\n Enter the values of a: ");
    scanf("%d",&a);
    printf("\n Enter the values of b: ");
    scanf("%d",&b);
    c=a-b;
    printf("\n Difference = %d \n",c);
}
void multiplication()
{   
	int a,b,c;
    printf("\n ------------- (Multiplication) -------------\n");
    printf("\n Enter the values of a: ");
    scanf("%d",&a);
    printf("\n Enter the values of b: ");
    scanf("%d",&b);
    c=a*b;
    printf("\n Multiplication = %d \n",c);
}
void division()
{   
	float a,b,c;
    printf("\n ------------- (Divition) -------------\n");
    printf("\n Enter the values of a: ");
    scanf("%d",&a);
    printf("\n Enter the values of b: ");
    scanf("%d",&b);
    c=a/b;
    printf("\n Division = %f \n",c);
}
