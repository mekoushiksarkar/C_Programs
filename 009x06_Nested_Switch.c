/* Nested Switch statement */

#include <stdio.h>
#include <conio.h>

int main()
{
        int a, b;

        printf("\n 1. Computer Science Department");
        printf("\n 2. Businesses Management Department");
        printf("\n 3. Electrical Department");
        printf("\n Enter your choice: ");
        scanf("%d", &a);

        switch (a)
        {
        case 1:
                printf("\n Available Department");
                printf("\n 1. School of Artificial Intelligence");
                printf("\n 2. School of Data Science");
                printf("\n Enter your choice: ");
                scanf("%d", &b);
                // inner switch to display the departments
                // under the school of commerce
                switch (b)
                {
                case 1:
                        // code to be executed if b= 1;
                        printf("\n You choose School of Artificial Intelligence.");
                        break;
                case 2:
                        // code to be executed if b= 2;
                        printf("\n You choose School of Data Science.");
                        break;
                }
                break;
        case 2:
                printf("\n Welcome to Businesses Management Department.");
                break;
        case 3:
                printf("\n Welcome to Electrical Department.");
                break;
        }
        return 0;
}