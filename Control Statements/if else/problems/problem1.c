//WAP to input any number and check either it is positive/negatice/zero
#include<stdio.h>
int main(){
    int n;
    printf("Enter any number:- ");
    scanf("%d",&n);
    if(n>0) printf("Positive.");
    else if(n<0) printf("Negative.");
    else printf("Zero.");
    return 0;
}