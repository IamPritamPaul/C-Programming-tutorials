// Write a program to input any character and check whether it is a vowel or not (using switch case).
#include <stdio.h>
int main()
{
    char c;
    printf("Enter any character : ");
    scanf("%c", &c);
    switch (c)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("Vowel");
        break;
    default:
        printf("Not a vowel.");
    }
    return 0;
}