#include<stdio.h>
int main()
{
    int n,ds=0;
    scanf("%d",&n);
    while(n>0)
    {
        n=n/10;
        ds=ds+1;
    }
    printf("%d",ds);
}