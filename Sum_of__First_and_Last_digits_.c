#include<stdio.h>
int main()
{
    int n,r,q,t,rev=0,sum;
    scanf("%d",&n);
    q=n%10;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
        t=rev%10;
    }
    sum=q+t;
    printf("%d",sum);
}