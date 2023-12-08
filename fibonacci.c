#include<stdio.h>
int main()
{
    int n,f1,f2,f3,i;
    scanf("%d",&n);
    f1=0,f2=1;
    printf("%d %d ",f1,f2);
    for(i=1;i<=n-2;i++)
    {
       f3=f1+f2;
       f1=f2;
       f2=f3;
       printf("%d ",f3);
    }
    
}