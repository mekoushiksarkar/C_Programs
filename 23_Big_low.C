/* Find Highest and Lowest value using Array */

#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20];
    int c,y,big,low;
    printf("\n Enter Array size: ");
    scanf("%d",&y);
    printf("\n Enter %d values: \n",y);
    for(c=0;c<y;c++)
        scanf("%d",&a[c]);
    printf("\n Elements of an Array: ");
    for(c=0;c<y;c++)
        printf("%d\t",a[c]);
    big=0;
    for(c=0;c<y;c++)
    {
        if(a[c]>big)
            big=a[c];
        if(a[c]<low)
            low=a[c];
    }
    printf("\n The biggest value: %d",big);
    printf("\n The lowest value: %d",low);
    return 0;
}