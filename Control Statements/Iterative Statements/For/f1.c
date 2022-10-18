//WAP to input any value and find either it is even or odd
#include<stdio.h>
int main(){
    int n;
    printf("Enter any number:- ");
    scanf("%d",&n);
    if(n%2) printf("Odd");
    else printf("Even");
    return 0;
}