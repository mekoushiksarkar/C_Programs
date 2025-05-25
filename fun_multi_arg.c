// Multiple Argument but No Return

#include <stdio.h>

int sum(int, int);
int sum3(int, int, int);

int main()
{
    int m, n, o;
    printf("\n Enter the value of m,n, o (Addition):\n");
    scanf("%d%d%d", &m, &n, &o);
    sum(m, n);
    sum3(m, n, o);
    return 0;
}
int sum(int a, int b)
{
    int c = a + b;
    printf("\n Sum of 2 no. = %d\n", c);
}
int sum3(int a, int b, int d)
{
    int c = a + b + d;
    printf("\n Sum of 3 no. = %d\n", c);
}
