/* Swaping without Third Variable */

#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b;
    printf("\n A= ");
    scanf("%d", &a);
    printf("\n B= ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\n a= %d", a);
    printf("\n b= %d", b);
    return 0;
}