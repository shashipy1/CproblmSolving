#include<stdio.h>
void main(){
    int m1,m2,m3,m4,m5;
    float per;
    printf("Enter the value od marks");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    per = calculate(m1,m2,m3,m4,m5,&tot);
}
float calculate(int a,int b,int c,int d, int e,int p){
    p=a+b+c+d+e;
    return p/5.0; 

}