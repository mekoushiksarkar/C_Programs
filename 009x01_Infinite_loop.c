/* Infinte Loop using "goto" */

#include <stdio.h>
#include <conio.h>

int main()
{
    inf_loop:
    printf("\n I am in Infinite Loop...  ");
    goto inf_loop;
    return 0;
}