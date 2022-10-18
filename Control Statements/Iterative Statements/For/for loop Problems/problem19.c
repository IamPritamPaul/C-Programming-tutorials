// Write a program to print fibonacci series up to n.(using for loop)
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number:- ");
    scanf("%d", &n);
    int first = 1, second = 1;
    printf("Fibonacci series:-\n%d\t%d\t", first, second);
    for (; second <= n;)
    {
        int sum = first + second;
        if (sum <= n)
            printf("%d\t", sum);
        first = second;
        second = sum;
    }
    return 0;
}