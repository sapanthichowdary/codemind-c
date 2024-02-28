#include<stdio.h>
int main()
{
    int a,i,j;//a=5
    scanf("%d",&a);
    for(i=1;i<=a;i++)//i=1 to 5
    {
        for(j=1;j<=a;j++)//j=1to5
        {
            if(j==i || j==a-i+1)
            printf("%c",i+64);
            else
            printf(" ");
        }
        printf("
");
    }
}