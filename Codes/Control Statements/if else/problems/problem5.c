//WAP to input any float and round off the number
#include<stdio.h>
int main(){
    float f;
    printf("Enter any float number:-  ");
    scanf("%f",&f);  //5.3
    int x=f;  //type conversion in assignment
    //x=5
    float r=f-x; //r = 0.3
    if(r>=0.5) x=x+1;
    printf("%d id the round off version of %0.2f",x,f);
    return 0;

}