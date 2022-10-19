// Write a Program to input any number and check whether it is Armstrong Number (A three digit number in which the sum of cube of all digits is equal to the number. Eg:- 371=3^3+7^3+1^3) or not using for loop.
// 371=3^3 + 7^3 + 1^3
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter any number:-  ");
    scanf("%d", &n);
    int sum = 0, copy_n = n, count = 0;
    // count the number of digits
    for (; n > 0; n /= 10)
    {
        count++;
    }
    int copy__n = copy_n;
    for (; copy_n > 0; copy_n /= 10)
    {
        int d = copy_n % 10;
        sum += (pow(d, count)); // pow(x,y)=x^y
    }
    if (sum == copy__n)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");
    return 0;
}