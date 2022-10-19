//WAP to find the roots of a quadratic equation and find the real and imaginary roots. if the root are real then print them else print "roots are imaginary"
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Enter the value of the constants a,b,c   :    ");
    scanf("%d%d%d",&a,&b,&c);
    float x1,x2;
    if(b*b>=4*a*c){   //x^y   pow(x,0.5)
        x1=((-b)+pow((b*b-4*a*c),(0.5)))/(2*a);
        x2=((-b)-pow((b*b-4*a*c),(0.5)))/(2*a);
    }
    else{
        printf("roots are imaginary");
        return 0;
    }
    printf("Roots are :    %0.2f   %0.2f",x1,x2);
    return 0;
}
