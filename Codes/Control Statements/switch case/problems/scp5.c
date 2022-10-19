// Write a program to find out the number of notes required for a given amount of money. (Start by 2000 Rs Note, 500, 200, 100, 50, 20, 10, 5, 2, 1)
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the amount: ");
    scanf("%d", &n);
    int choice;
    printf("Enter the value of the note from which you want to begin: ");
    scanf("%d", &choice);
    int notes;
    switch (choice)
    {
    case 2000:
        notes = n / 2000;
        n %= 2000;
        if (notes != 0)
            printf("%d number of 2000 notes required.\n", notes);
        if (n == 0)
            break;
    case 500:
        notes = n / 500;
        n %= 500;
        if (notes != 0)
            printf("%d number of 500 notes required.\n", notes);
        if (n == 0)
            break;
    case 200:
        notes = n / 200;
        n %= 200;
        if (notes != 0)
            printf("%d number of 200 notes required.\n", notes);
        if (n == 0)
            break;
    case 100:
        notes = n / 100;
        n %= 100;
        if (notes != 0)
            printf("%d number of 100 notes required.\n", notes);
        if (n == 0)
            break;
    case 50:
        notes = n / 50;
        n %= 50;
        if (notes != 0)
            printf("%d number of 50 notes required.\n", notes);
        if (n == 0)
            break;
    case 20:
        notes = n / 20;
        n %= 20;
        if (notes != 0)
            printf("%d number of 20 notes required.\n", notes);
        if (n == 0)
            break;
    case 10:
        notes = n / 10;
        n %= 10;
        if (notes != 0)
            printf("%d number of 10 notes required.\n", notes);
        if (n == 0)
            break;
    case 5:
        notes = n / 5;
        n %= 5;
        if (notes != 0)
            printf("%d number of 5 notes required.\n", notes);
        if (n == 0)
            break;
    case 2:
        notes = n / 2;
        n %= 2;
        if (notes != 0)
            printf("%d number of 2 notes required.\n", notes);
        if (n == 0)
            break;
    case 1:
        notes = n / 1;
        n %= 1;
        if (notes != 0)
            printf("%d number of 1 notes required.\n", notes);
        break;
    default:
        printf("Invalid Input.");
    }
    return 0;
}