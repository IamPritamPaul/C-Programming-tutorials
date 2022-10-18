//WAP to input any character and print the capital version if it is small letter and print the smaller version if it is capital letter
//a-97   A-65   97-65 => 32
#include<stdio.h>
int main(){
    char ch;
    printf("Enter any character :-  ");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z'){
        ch+=32;
        printf("%c is the small letter version.",ch);
    }
    else if(ch>='a'&&ch<='z'){
        ch-=32;
        printf("%c is the capital letter version.",ch);
    }
    else printf("Invalid Input.");
    return 0;
}
