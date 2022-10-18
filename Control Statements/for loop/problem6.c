// Write a Program to input an integer and find out the sum of all the digits of that number (using for loop).
// 1234  -> 10
// sum=0;   sum+=(digit)
// int n=1234       n%10    4(right most digit)
// n=n/10;      123
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number:-  ");
    scanf("%d", &n);
    int sum = 0, x = n;
    for (; n > 0; n /= 10)
    {
        int d = n % 10;
        sum += d;
    }
    printf("%d the sum of all the digits of %d", sum, x);
    return 0;
}