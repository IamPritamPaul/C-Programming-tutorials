// Write a program to input two integers and find their sum , difference, multiplication, division and modulus using switch case.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter any two numbers:- ");
    scanf("%d%d", &a, &b);
    fflush(stdin);
    printf("Enter the operator (+,-,*,/,%%) : ");
    char ch;
    scanf("%c", &ch);
    switch (ch)
    {
    case '+':
        printf("%d + %d = %d", a, b, a + b);
        break;
    case '-':
        printf("%d - %d = %d", a, b, a - b);
        break;
    case '*':
        printf("%d * %d = %d", a, b, a * b);
        break;
    case '/':
        printf("%d / %d = %d", a, b, a / b);
        break;
    case '%':
        printf("%d %% %d = %d", a, b, a % b);
        break;
    default:
        printf("Invalid Operation.");
    }
    return 0;
}