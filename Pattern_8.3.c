#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i=a;i>=1;i--)
    {
        for(j=a;j>=1;j--)
        {
            if(j==i || i+j==a+1)
            printf("%d",i);
            else
            printf(" ");
        }
        printf("
");
    }
}