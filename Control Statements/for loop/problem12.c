// Write a program to input any number and find the factors of that number.(using for loop)
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number:- ");
    scanf("%d", &n);
    printf("\nThe factors of %d are :-\n", n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            printf("%d\t", i);
    }
    return 0;
}