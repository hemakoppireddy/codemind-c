#include<stdio.h>
int main()
{
    int i,r,c,j,sum=0,s=0;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(arr[i][j]%2==0)
            {
                sum+=arr[i][j];
            }
            else
            {
               s+=arr[i][j]; 
            }
        }
    }
    printf("%d %d",sum,s);
}