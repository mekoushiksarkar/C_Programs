/* To check String is Palindrome or Not */

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char st1[50], st2[50];
    int i, j;
    puts("\n Enter the first string: ");
    gets(st1);
    i = 0;
    j = strlen(st1) - 1;
    while (j >= 0)
    {
        st2[i] = st1[j];
        i++;
        j--;
    }
    st2[i] = '\0';
    if (strcmp(st1, st2) == 0)
        printf("\n %s is a Palindrome string", st1);
    else
        printf("\n %s is not a Palindrome string", st1);
    return 0;
}
