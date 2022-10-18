// Write a program to input any number and check if it is a strong number (digits’ factorials’ sum is equal to that number) or not using for loop.
#include <stdio.h>
int main()
{
    int n;
    // input
    printf("Enter any number:- ");
    scanf("%d", &n);
    int sum = 0, copy_n = n;
    for (; n > 0; n /= 10)
    {
        int d = n % 10;
        int fact = 1;
        for (int i = 1; i <= d; i++)
            fact *= i;
        sum += fact;
    }
    if (sum == copy_n)
        printf("%d is a strong number", copy_n);
    else
        printf("%d is not a strong number", copy_n);
    return 0;
}