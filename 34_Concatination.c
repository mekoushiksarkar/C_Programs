/* Concatination of String */

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char st1[50],st2[50];
    puts("Enter the first string:");
    gets(st1);
    puts("Enter the second string:");
    gets(st2);
    strcat(st1," ");
    strcat(st1,st2);
    printf("After Concatination: %s ",st1);
    return 0;
}