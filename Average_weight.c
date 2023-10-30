#include<stdio.h>
int main()
{
    int average,boy1,boy2,boy3;
    scanf("%d%d%d%d",&average,&boy1,&boy2,&boy3);
    boy3=(3*average)-boy1-boy2;
    printf("%d",boy3);
}