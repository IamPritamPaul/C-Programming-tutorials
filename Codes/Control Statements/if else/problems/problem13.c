//WAP to input any character and check either it is capital letter / small letter / number
//65-90  (A-Z)
//97-122  (a-z)
//48-57  (0-9)
#include<stdio.h>
int main(){
    char a;
    printf("Enter any character :-  ");
    scanf("%c",&a);
    // int n=a;
    if(a>=/* 65 */'A' && a<=/* 90 */'Z'){
        printf("It's a capital letter");
        return 0;
    }
    if(a>=/* 97 */'a' && a<=/* 122 */'z'){
        printf("It's a small letter");
        return 0;
    }
    if(a>=/* 48 */'0' && a<=/* 57 */'9') printf("It's a Number");
    else printf("Invalid Input");
    return 0;
}