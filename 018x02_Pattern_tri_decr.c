/*  
    4  4  4  4 
    4  4  4 
    4  4 
    4 
 */

#include <stdio.h>

int main()
{
    int a, b;
    for (a = 1; a <= 4; a++)
    {
        for (b = 4; b >= a; b--)
            printf(" 4 ");
        printf("\n");
    }
    return 0;
}