/* Addition, Subtraction, Multiplication, Division using If else  */

#include<stdio.h>
#include<conio.h>
int main()
{
    int choice;
    int n1,n2,res;
    int addition=1,subtraction=2,multiplication=3,division=4;
    printf("\n 1.Addition");
    printf("\n 2.Subtraction");
    printf("\n 3.Multiplication");
    printf("\n 4.Division");
    printf("\n Enter your choice(no.): ");
    scanf("%d", &choice);
    printf("\n Enter the Frist number and Second number: ");
    scanf("%d %d", &n1, &n2);
    if(choice==addition)
        res=n1+n2;
    else if(choice==subtraction)
        res=n1-n2;
    else if(choice==multiplication)
        res=n1*n2;
    else if(choice==division)
    {
        if(n2 != 0)
            res=n1/n2;
        else
            printf("\n Result is NOT DEFINED.");
    }
    printf("\n The result is: %d",res);
    return 0;
}