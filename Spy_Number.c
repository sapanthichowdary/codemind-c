#include<stdio.h>
int main()
{
    int n,i,r,sum=0,pro=1;
    scanf("%d",&n);
    int t=n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
        pro=pro*r;
    }
    if(sum==pro)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    
}