#include<stdio.h>
int main()
{
    int n,a,b,c,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(b>=(a+c))
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
        
    }
}