// Write a Program to multiply two positive numbers without using * operator.
// 3 4   12
// 3*4 = 3+3+3+3  or 4+4+4
#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter two numbers:- ");
    scanf("%d%d", &x, &y);
    int ans = 0;
    for (int i = 1; i <= y; i++)
    {
        ans += x;
    }
    printf("%d is the answer.", ans);
    return 0;
}