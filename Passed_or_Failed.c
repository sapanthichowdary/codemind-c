#include<stdio.h>
int main()
{
    int q,w,e,r,t;
    scanf("%d%d%d%d%d",&q,&w,&e,&r,&t);
    if(q>34&w>34&e>34&r>34&t>34)
    {
        printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }
}