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
    int flag=0;
    int se;
    scanf("%d",&se);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(se==a[i][j])
            {
                flag+=1;
            }
        }
    }
    if(flag==1)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}