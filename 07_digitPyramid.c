#include<stdio.h>
int main(){
    int n=4;
    for(int  i=0; i<n; i++)
     {
        for(int k=1; k<=i; k++)
        {
            printf(" ");
        }

        for(int j=0; j<n-i; j++)
        {
            printf("%d ",i+1);
        }
        printf("\n");
     }    
    return 0;
}