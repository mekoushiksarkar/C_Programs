//To find the area of a triangle

#include<conio.h>
#include<math.h>
#include<stdio.h>
main()
{
    float a,b,c,d,e,f,s1,s2,A1,A2;
    printf("Enter the lengths of three sides of the 1st triangle=");
    scanf("%f%f%f",&a,&b,&c);
    printf("Enter the lengths of three sides of the 2nd triangle=");
    scanf("%f%f%f",&d,&e,&f);
    if(a+b>c && b+c>a && c+a>b)
    {
        s1=(a+b+c)/2;
        A1=sqrt(s1*(s1-a)*(s1-b)*(s1-c));
        printf("\nThe required area of 1st triangle is=%f square units",A1);
    }
    else
        printf("\nThe triangle cannot be drawn for this input");
    if(d+e>f && e+f>d && d+f>e)
    {
        s2=(d+e+f)/2;
        A2=sqrt(s2*(s2-d)*(s2-e)*(s2-f));
        printf("\nThe required area of 2nd triangle is=%f square units",A2);
    }
    else
        printf("\nThe triangle cannot be drawn for this input");
    getch();
}
