#include<stdio.h>
int main()
{
    int p,c,b,m,com,f;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&com,&f);
    f=(p+c+b+m+com)*100/500;
    if(f>=90)
    {
        printf("Grade A");
    }
    else if(f>=80)
    {
        printf("Grade B");
    }
    else if(f>=70)
    {
        printf("Grade C");
    }
    else if(f>=60)
    {
        printf("Grade D");
    }
    else if(f>=40)
    {
        printf("Grade E");
    }
    else 
    {
        printf("Grade F");
    }
}