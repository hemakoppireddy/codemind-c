#include<stdio.h>
int main()
{
    int i=1,n;
    scanf("%d",&n);
    while(n>0)
    {
        printf("%d ",2*n);
        n=n-1;
        i++;
    }
}