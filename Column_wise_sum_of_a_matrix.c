#include<stdio.h>
int main()
{
    int c,r;
    scanf("%d%d",&r,&c);
    int a[r][c],i,j,clmsum=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<c;i++)
    {
        int clmsum=0;
        for(j=0;j<r;j++)
        {
            clmsum=clmsum+a[j][i];
        }
        printf("%d ",clmsum);
    }
}