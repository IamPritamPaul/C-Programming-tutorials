#include<stdio.h>
int main(){
    int x,y;
    int *p,*q;
    p=&x;
    q=&y;
    printf("enter any number:- ");
    scanf("%d",p);
    printf("annother number: ");
    scanf("%d",q);
    int sum=*p+*q;
    printf("%d is the sum",sum);
    return 0;
}