//WAP to check either a person is eligible to vote in india or not
#include<stdio.h>
int main(){
    int age;
    char c;
    printf("Are you an indian citizen??\n\npress 'y' if yes\npress 'n' if no\n--> ");
    scanf("%c",&c);
    if(c=='y'){
        printf("Enter your age:-  ");
        scanf("%d",&age);
        if(age>=18) printf("You can Vote");
        else printf("You can't vote");
    } 
    else printf("You can't vote");
    return 0;
}