// Write a program to input any number and count the number of factors of that number.(using for loop)
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
    printf("the number of factors are :- %d", count);
    return 0;
}