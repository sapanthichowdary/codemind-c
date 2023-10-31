#include<stdio.h>
int main()
{
    int hf,spinf,speedf;
    scanf("%d%d%d",&hf,&spinf,&speedf);
    if(hf>50 && spinf>60 && speedf>100)
    {
        printf("10");
    }
    else if(hf>50 && spinf>60 && speedf<=100)
    {
        printf("9");
    }
    else if(hf<=50 && spinf>60 && speedf>100)
    {
        printf("8");
    }
    else if(hf>50 && spinf<=60 && speedf>100)
    {
        printf("7");
    }
    else if(hf>50 || spinf>60 || speedf>100)
    {
        printf("6");
    }
    else
    {
        printf("5");
    }
}