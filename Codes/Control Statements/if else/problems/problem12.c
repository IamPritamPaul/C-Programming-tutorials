//WAP to input any character and check either it is vowel or not
#include<stdio.h>
int main(){
    char c;
    printf("Enter any character :-  ");
    scanf("%c",&c);
    if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U'){
        printf("Vowel");
    }
    else printf("Not a vowel");
    return 0;
}