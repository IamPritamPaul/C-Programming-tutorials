#include<stdio.h>
int main(){
    int month_number;
    printf("Enter the month number:- ");
    scanf("%d",&month_number);
    switch(month_number){
        case 1:
            printf("January\n");
            // break;1
        case 2:
            printf("February\n");
            // break;1
        case 3:
            printf("March\n");
            // break;1
        case 4:
            printf("April\n");
            // break;1
        case 5:
            printf("May\n");
            // break;1
        case 6:
            printf("June\n");
            // break;1
        case 7:
            printf("July\n");
            // break;1
        case 8:
            printf("August\n");
            // break;1
        case 9:
            printf("September\n");
            // break;1
        case 10:
            printf("October\n");
            // break;1
        case 11:
            printf("November\n");
            // break;1
        case 12:
            printf("December\n");
            // break;1
        default:
            printf("Invalid input");
    }
    return 0;
}