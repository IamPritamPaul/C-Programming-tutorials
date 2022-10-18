// Write a program to input any number and check it is prime or not.(using for loop)
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number:- ");
    scanf("%d", &n);
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    count == 2 ? printf("Prime Number") : printf("Not a prime number");
    return 0;
}