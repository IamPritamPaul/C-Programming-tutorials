// Write a program to input any number and check if it is perfect or not (factors’ sum)(using for loop).
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number:- ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    /* if (sum == n)
        printf("%d is a perfect number", n);
    else
        printf("%d is not a perfect number", n); */
    sum == n ? printf("%d is a perfect number", n) : printf("%d is not a perfect number", n);
    return 0;
}