/* Pass or Fail */

#include<stdio.h>
#include<conio.h>
int main()
{
    int per_mark;
    printf("\n Enter the percentage of markes: ");
    scanf("%d", &per_mark);
    if(per_mark<40)
        printf("\n The grade is Fail.");
    else if(per_mark>=40 && per_mark<60)
        printf("\n The grade is second division.");
    else if (per_mark>=60 && per_mark<75)
        printf("\n The grade is Frist division.");
    else
        printf("\n The grrade is star.");
    return 0;
}
