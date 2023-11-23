#include<stdio.h>
int main()
{
    int i,n,a=12;
    scanf("%d",&n);
    for(i=1;i<=a;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}