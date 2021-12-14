#include<stdio.h>
#include<conio.h>
int Manu();
void Bus();
void Cycle();
void Riksha();
void Delete();
void ShowDetail();
int nor=0, nob=0, noc=0, amount=0, count=0;
void main()
{
 clrscr();
    switch(Manu())
    {
        case 1:
         Bus();
           break;
        case 2:
         Cycle();
           break;
        case 3:
         Riksha();
           break;
        case 4:
           ShowDetail();
           break;
        case 5:
           Delete();
        default:
        printf("\ninvalid choise");
    }
    getch();
}
int Menu()
{
    int ch;
    printf("\n1 enter bus");
    printf("\n2 enter cycle");
    printf("\n3 enter riksha");
    printf("\n4 enter status");
    printf("\n5 enter data");
    printf("\n enter your choise");
    scanf("%d",&ch);
    return (ch);
}
void Delete()
{
    nob=0;
    noc=0;
    nor=0;
    amount=0;
    count=0;
}
void ShowDetail()
{
    printf("number of bus%d",nob);
    printf("number of cycle%d",noc);
    printf("number of riksha%d",nor);
    printf("total number of vihical=%d",count);
    printf("\ntotal gain amount=%d",amount);
   
}
void Riksha()
{
    nor++;
    amount=amount+50;
    count++;
}
void Cycle()
{
    noc++;
    amount=amount+20;
    count++;
}
void Bus()
{
    nob++;
    amount=amount+100;
    count++;
}






