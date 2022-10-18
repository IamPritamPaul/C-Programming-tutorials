// Write a program to input any number and print twenty numbers in descending order from the number.(using for loop)
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number:- ");
    scanf("%d", &n);
    for (int i = n; i > n - 20; i--)
    {
        printf("%d  ", i);
    }
    return 0;
}