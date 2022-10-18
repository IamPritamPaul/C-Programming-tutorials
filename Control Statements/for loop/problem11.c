// Write a program to calculate x^y without using any library function.(using for loop)
// x^y = x*x*x*x*x*x*x.... y times
// 2^5 = 2*2*2*2*2
#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the value of base and power:- ");
    scanf("%d%d", &x, &y);
    unsigned long int ans = 1;
    for (int i = 1; i <= y; i++)
    {
        ans *= x;
    }
    printf("%u is the answer", ans);
    return 0;
}