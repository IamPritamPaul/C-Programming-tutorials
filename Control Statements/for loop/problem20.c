// Write a program to input any number and check whether it is palindrome or not (using for loop)
// 121   12321    1221    1233443321
// 123   321  123 is not a palindrome
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number:- ");
    scanf("%d", &n); // 121
    int reverse_n = 0, copy_n = n;
    for (; n > 0; n /= 10)
    {
        reverse_n = reverse_n * 10 + (n % 10); // 121
    }
    if (reverse_n == copy_n)
        printf("Palindrome");
    else
        printf("Not a Palindrome");
    return 0;
}