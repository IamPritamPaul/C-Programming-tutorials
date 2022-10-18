// Write a program to input any number and find the factorial of that number.(using for loop)
// 5!= 5*4*3*3*2*1
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number:- ");
    scanf("%d", &n);
    unsigned long int f = 1;
    for (int i = 2; i <= n; i++)
    {
        f *= i;
    }
    printf("%u is the factorial of %d", f, n);
    return 0;
}