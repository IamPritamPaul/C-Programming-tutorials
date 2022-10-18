//WAP to input any number and check either it is even or odd
#include<stdio.h>
int main(){
    int n;
    printf("Enter any number:- ");
    scanf("%d",&n);
    if(n%2) printf("Odd");
    else printf("even");
    return 0;
}