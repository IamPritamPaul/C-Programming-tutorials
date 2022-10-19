//WAP to input three numbers and find the smallest one
//4 ways
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers:- ");
    scanf("%d%d%d",&a,&b,&c);
    /* if(a<b && a<c) printf("%d is the smallest one",a);
    else if(b<a && b<c) printf("%d is the smallest one",b);
    //if(c<a && c<b)
    else printf("%d is the smallest one",c); */
    /* if(a<b){
        if(a<c) printf("%d is the smallest one",a);
        else printf("%d is the smallest one",c);
    }
    else{
        if(b<c) printf("%d is the smallest one",b);
        else printf("%d is the smallest one",c);
    } */
    a<b?a<c?printf("%d is the smallest one",a):printf("%d is the smallest one",c):b<c?printf("%d is the smallest one",b):printf("%d is the smallest one",c);
    
    return 0;
}