// Write a program to print fibonacci series up to nth term.(using for loop)
// 1 1 2 3 5 8 13 21 34 55 89 ...
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number:- ");
    scanf("%d", &n);
    int first = 1, second = 1;
    printf("Fibonacci series:-\n%d\t%d\t", first, second);
    for (int i = 3; i <= n; i++)
    {
        int sum = first + second;
        printf("%d\t", sum);
        first = second;
        second = sum;
    }
    return 0;
}