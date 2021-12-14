#include<stdio.h>
int main(){
    int n=10;
    for(int  i=0; i<=n-1; i++)
     {
        for(int j=n; j>i; j--)
        {
            printf("* ");
        }
        printf("\n");
     }    
    return 0;
}