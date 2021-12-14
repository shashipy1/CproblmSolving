#include<stdio.h>
void main(){
    int x[10],no,i=0;
    printf("enter any no\n");
    scanf("%d",&no);
    while(i>0){
        if( x[i]==10)
            printf("a");
        else if(x[i]==11)
            printf("b");
        else if(x[i]==12)
            printf("c");
        else if(x[i]==13)
             printf("d");
        else if(x[i]==14)
            printf("e");
        else if(x[i]==15)
            printf("f");
        else
            printf("%d",x[i]);
         i--;
    }
} 