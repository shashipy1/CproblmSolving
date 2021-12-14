#include<stdio.h>
#include<conio.h>
void main(){
    int x[10],i;
    printf("enter the arraY\n");
    for(int i=0; i<10; i++)
    scanf("%d",&x[i]);
    printf("%d",x[i]);
    for(int i=0; i<10; i++)
    printf("%d",x[i]);
    printf("reverse array\n");
    for(int i=0; i>0; i--)
    printf("%d",x[i]);
}