#include<stdio.h>
int main()
{
    int bs;
    scanf("%d",&bs);
    if(bs<=10000)
    {
        printf("%.2f",bs+(0.80*bs)+(bs*0.20));
    }
    else if(bs<=20000)
    {
        printf("%.2f",bs+(bs*0.90)+(bs*0.25));
    }
    else if(bs>20000)
    {
        printf("%.2f",bs+(bs*0.95)+(bs*0.30));
    }
    
}