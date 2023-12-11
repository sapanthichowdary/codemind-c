#include<stdio.h>
int main()
{
    int n,k,r,b,a,e,c,f;
    scanf("%d%d%d%d",&n,&k,&r,&b);
    a=k*r;
    e=n-k;
    c=e*b;
    f=e*r;
    if(f<c)
    {
        printf("%d",a+f);
    }
    else
    {
        printf("%d",a+c);
    }
    
}