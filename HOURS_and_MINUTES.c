#include<stdio.h>
int main()
{
    int m,h,rm;
    scanf("%d%d%d",&m,&h,&rm);
    h=m/60;
    rm=m%60;
    printf("%d Hour(s) %d Minute(s)",h,rm);
}