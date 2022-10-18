// Write a Program to input a number & print the corresponding Week day using switch case. (week starts by sunday)
#include <stdio.h>
int main()
{
    int number;
    printf("Enter any number:- ");
    scanf("%d", &number);
    switch (number)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Invalid Input");
    }
    return 0;
}