#include<stdio.h>
#include<math.h>
int main()
{
    float p,b;
    scanf("%f%f",&p,&b);
    float h=sqrt((p*p)+(b*b));
    printf("%.2f",h);
}