// Write a program to print all two digit odd numbers in reverse order.(using for loop)
// 99 to 11
#include <stdio.h>
int main()
{
    for (int i = 99; i > 10; i -= 2)
    {
        printf("%d\t", i);
    }
    return 0;
}