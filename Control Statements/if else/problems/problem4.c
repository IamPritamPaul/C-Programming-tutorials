//WAP to input any year and check whether it is leap year or not
#include<stdio.h>
int main(){
    int year;
    printf("Enter the year:-  ");
    scanf("%d",&year);
    if(year%100!=0){
        if(year%4==0) printf("Leap Year");
        else printf("Not Leap Year");
    }
    else{
        if(year%400==0) printf("Leap Year");
        else printf("Not Leap Year");
    }
    return 0;
}