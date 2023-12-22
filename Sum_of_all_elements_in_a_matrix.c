#include<stdio.h>
int main()
{
    int r,c,i,j;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            sum+=a[i][j];
        }
    }
    printf("%d",sum);
}