// Write a program to input lower limit and upper limit and print all the odd numbers in that range.(using for loop)
#include <stdio.h>
int main()
{
    int ll, ul;
    printf("Enter the lower limit ans upper limit :   ");
    scanf("%d%d", &ll, &ul);
    for (int i = ll; i <= ul; i++)
    {
        if (i % 2 == 1)
            printf("%d\t", i);
    }
    return 0;
}