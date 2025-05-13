/* Swapping using X-OR without 3rd variable */

#include <stdio.h>
int main()
{
    int a, b;
    printf("\n Enter the values of A= ");
    scanf("%d", &a);
    printf("\n Enter the values of B= ");
    scanf("%d", &b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("\n The values of A,B = %d , %d", a, b);
    return 0;
}