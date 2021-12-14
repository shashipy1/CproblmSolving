#include<stdio.h>

int main()
{
    int rev(int num), rem,num;{
    int rev=0, rem;
    while(num!=0)
    {
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;
    }
    return rev;
    }
    int main(){
     num=2543;
     num=2543;
    int rev=reverse(num);
    printf("the reverse number is %d",rev);
    }  
      return 0;
    }