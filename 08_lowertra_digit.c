#include<stdio.h>
int main(){
    int n=5;
    for(int  i=0; i<n; i++)
     {

        for(int j=1; j<=i+1; j--)
        {
            printf("%d ",i+1);
        }
        printf("\n");            
     }    
    return 0;
}