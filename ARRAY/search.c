#include<stdio.h>
#include<conio.h>
int main(){
    int x[10],i,se;
    printf("enter the 10 numbers\n");
    for(int i=0; i<10; i++){
       printf("\n enter searching no");
    scanf("%d",&se);
    }
    for(int i=0; i<10; i++){
      if(se==x[i])
      {
          printf("\n FOUND AND POS=%d",i+1);
          return 0;
      }
    }
printf("\n element not found ");
}