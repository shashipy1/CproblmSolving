#include<stdio.h>

void main (){
    int x, y;
    void swap(int, int );
    printf("\n  ENTER THE VALUE OF X AND Y");
    scanf("%d%d",&x,&y);
    swap(x,y);
    printf("AFTER SWAPPING %d%d", x,y);

}
void  swap (int a, int  b){
int c; 
    c = a;
    a = b;
    b = c;
}