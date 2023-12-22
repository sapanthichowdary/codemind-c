#include<stdio.h>
int main()
{
    int r;
    int c;
    int flag=0;
    scanf("%d",&r);
    scanf("%d",&c);
    int a[r][c],i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int se;
    scanf("%d",&se);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           if(se==a[i][j])
           {
               flag=1;
               break;
           }
        }
    }
    if(flag==1)
    printf("1");
    else
    printf("0");
}