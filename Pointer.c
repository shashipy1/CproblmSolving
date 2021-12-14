#include<stdio.h>

int main(){
    int x = 12;
    int *p;
    p = &x;
    p = x;
printf("%u%u%u",p ,&p, &x);
printf(" \n %d%d",x ,&p);
p = 4045;
printf("%u%u",p, &x);
*p = 6069;
printf("%u%u%u",p,&x);
&p = 7389;
printf("%u%u",p,&x);
}
void main(){
    int x = 12;
    int *p;
    p = &x;
    p = x;
    scanf("%d",&x);
    scanf("%d",&x);
    printf("%u%u%u",p,&p,&p);
    printf("%d%d",x,*p);
}