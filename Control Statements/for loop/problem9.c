// Write a program to input any number and print the multiplication table of that number.(using for loop)
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number:- ");
    scanf("%d", &n);
    for (int i = 1; i < 11; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}