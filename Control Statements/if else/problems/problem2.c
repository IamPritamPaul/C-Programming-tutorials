//WAP to input any number and print "correct" if it is 10 else print "incorrect"
#include<stdio.h>
int main(){
    int n;
    printf("Enter any number:- ");
    scanf("%d",&n);
    if(n==10) printf("Correct");
    else printf("Incorrect");
    return 0;
}