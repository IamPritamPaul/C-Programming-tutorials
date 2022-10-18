// Write a Program to input any Number and count the number of digits using for loop.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number:-  ");
    scanf("%d", &n);
    int count = 0;
    for (; n > 0; n /= 10)
    {
        count++;
    }
    printf("%d the number of digits.", count);
    return 0;
}