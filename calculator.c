#include<stdio.h>
#include<math.h>
int main(){
    char operator;
    double first, second;
    printf("enter the value of operator(+,-,*,/):");
    scanf("%c",&operator);
    printf("enter the number first and second");
    scanf("%lf %lf",&first, &second);
    switch(operator){
        case '+':
        printf("%.2lf",first+second);
        break;
        case '-':
        printf("%.2lf-%.2lf=%.2lf",first,second,first-second);
        break;
        case '*':
        printf("%.2lf*%.2lf=%.2lf",first,second,first*second);
        break;
        case '/':
        printf("%.2lf/%.2lf=%.2lf",first,second,first/second);
        default:
        printf("error! operator is not correct");
        
    }
    
}