// Write a program to input ‘n’ and find the sum of n natural numbers.(using for loop)
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of 'n' :  ");
    scanf("%d", &n); // n=5
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i; // sum=15   sum=sum+i
    }
    printf("%d is the sum", sum);
    return 0;
}