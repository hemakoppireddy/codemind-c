#include<stdio.h>
int main()
{
    int n,r,ds=0,pr=1;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        ds=ds+r;
        pr=pr*r;
        n=n/10;
    }
    if(ds==pr)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}