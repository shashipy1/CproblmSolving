#include<stdio.h>
int main(){
    int n=5;
    for(int  i=0; i<n; i++)
     {
        for(int k=1; k<=i; k++)
        {
            printf(" ");
        }

        for(int j=0; j<n-i; j++)
        {
            printf("1 ");
        }
        printf("\n");
     }    
    return 0;
}