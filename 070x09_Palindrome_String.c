/* To check String is Palindrome or Not */

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char a[20], b[20];

    printf("\n Enter a string to check if it is Palindrome: ");
    gets(a);
    
    strcpy(b, a);
    strrev(b);
    
    if (strcmp(a, b) == 0)
        printf("\n Entered string is a Palindrome.");
    else
        printf("\n Entered string is not a Palindrome.");
    getch();
}