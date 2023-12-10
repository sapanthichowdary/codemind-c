#include<stdio.h>
int main()
{
    int days,weeks,years;
    scanf("%d%d%d",&days,&weeks,&years);
    years=days/365;
    weeks=(days%365)/7;
    printf("%d
",years);
    printf("%d
",weeks);
}