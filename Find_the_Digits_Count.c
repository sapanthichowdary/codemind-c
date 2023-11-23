#include<stdio.h>
int main()
{
    int n,r,dc=0,i;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        dc=dc+1;
    }
    printf("%d",dc);
}