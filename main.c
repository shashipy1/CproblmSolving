#include<stdio.h>
int main(){
    int yr, mon;
    printf("enter the yr and mon: ");
    scanf("%d %d",&yr, &mon);
    if((mon==2) && ((yr%400==0) || (yr%4==0) && (yr%100!=0)))
    {
        printf("Number of day is 28");
    }
    else if(mon==2)
    {
        printf("Number of day is 29");
    }
    else if(mon==1 || mon==3 || mon==5 || mon==7 || mon==8 || mon==10 || mon==12 )
    {
        printf("Number of day is 31");
    }
    else 
    {
        printf("Number of day is 30");
    }
}