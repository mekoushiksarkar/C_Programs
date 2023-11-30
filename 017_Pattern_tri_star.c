/*
 Enter the number of Rows: 5
 * 
 *  * 
 *  *  * 
 *  *  *  * 
 *  *  *  *  * 
 */

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, n;
    printf("\n Enter the number of Rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}