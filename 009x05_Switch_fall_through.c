/* Switch program is a fall through without break statement */

#include <stdio.h>
#include <conio.h>

int main()
{
    int num = 0;

    printf("\n Enter any num: ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("\n Number is equal 1 \n ");
    case 2:
        printf("\n Number is equal 2 \n ");
    case 3:
        printf("\n Number is equal 3 \n ");
    default:
        printf("\n Number is equal to 1, 2 or 3 ");
    }
    return 0;
}