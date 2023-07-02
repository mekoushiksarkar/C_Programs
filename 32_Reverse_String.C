/* Reverse of a String */

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char st[50];
    puts("\n Enter string: ");
    gets(st);
    puts("\n The Reverse string is:");
    puts(strrev(st));
    return 0;
}