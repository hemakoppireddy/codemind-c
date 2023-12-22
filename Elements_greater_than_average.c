#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    int avg,c=0,sum=0;
    for(i=1;i<=n;i++)
    {
        sum+=a[i];
    }
    avg=sum/n;
    for(i=1;i<=n;i++)
    {
        if(a[i]>=avg)
        {
            c+=1;
        }
    }
    printf("%d",c);
}