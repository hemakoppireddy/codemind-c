#include<stdio.h>
int main()
{
    int n,r,ds=0,c=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        ds+=1;
        if(r%2==0)
        {
            c+=1;
        }
        n/=10;
    }
    if(ds==c)
    {
        printf("Even");
    }
    else if(c==0)
    {
       printf("Odd"); 
    }
    else if(c<ds)
    {
        printf("Mixed");
    }
}