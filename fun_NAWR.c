// No argument but with return

#include<stdio.h>

int sum(void);

int main()
{
    
    int add= sum();
    printf("\n Sum = %d",add);
    return 0;
}
int sum(void)
{
    int a,b;
    printf("\n Enter the values of a,b (Addition):\n");
    scanf("%d%d",&a,&b);
    int c= a+b;
    return c;
}
