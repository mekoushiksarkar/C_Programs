/* Lower case String to Upper Case */

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char name[80];
    printf("\n Enter a name in lower case: ");  //Space not allow
    scanf("%s",name);
    strupr(name);
    printf("The name in upper case is: %s",name);
    return 0;
} 