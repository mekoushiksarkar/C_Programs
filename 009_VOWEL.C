/* Check Vowel using Switch-Case */

#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("\n Enter a character: ");
    scanf("%c", &ch);
    switch(ch)
    {
        case'A':
            printf("\n %c is a vowel.",ch);
            break;
        case'a':
            printf("\n %c is a vowel.",ch);
            break;
        case'E':
            printf("\n %c is a vowel.",ch);
            break;
        case'e':
            printf("\n %c is a vowel.",ch);
            break;
        case'I':
            printf("\n %c is a vowel.",ch);
            break;
        case'i':
            printf("\n %c is a vowel.",ch);
            break;
        case'O':
            printf("\n %c is a vowel.",ch);
            break;
        case'o':
            printf("\n %c is a vowel.",ch);
            break;
        case'U':
            printf("\n %c is a vowel.",ch);
            break;
        case'u':
            printf("\n %c is a vowel.",ch);
            break;
        default:
            printf("\n %c is not a vowel.",ch);
    }
    return 0;
}
