#include<stdio.h>
#include<conio.h>
int main(){
    int x[10],i,j,t;
    printf("enter the array\n");
    for(int i=0; i<10; i++){
        scanf("%d",&x[i]);
        for(int i=0; i<10; i++){
            for(int j=0; j<9-i; j++)
            {
                if(x[j]) > x[j+1]);{
                    t=x[j];
                    x[j]=x[j+1];
                    x[j+1]=t;
                }
            } 
        }
    printf("\nAfter sorting");
    for(int i=0; i<10; i++){
        printf("%d",x[i]);
    }
    }
}