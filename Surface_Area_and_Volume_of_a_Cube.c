#include<stdio.h>
#include<math.h>
int main()
{
    int a,area,volume;
    scanf("%d",&a);
    area=6*a*a;
    volume=pow(a,3);
    printf("Surface area = %d and Volume = %d",area,volume);
}