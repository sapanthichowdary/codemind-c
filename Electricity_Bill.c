#include<stdio.h>
int main()
{
    int units;
    float cu,surcharge,bill,tbill;
    scanf("%d",&units);
    if(units<=199)
    {
        printf("Units Consumed: %d
",units);
        cu=1.20;
        printf("Cost per Unit: %.2f
",cu);
        bill=units*cu;
        printf("Bill: %.2f
",bill);
        surcharge=0;
        printf("Surcharge: %.2f
",surcharge);
        tbill=surcharge+bill;
        printf("Total Amount: %.2f
",tbill);
    }
    else if(units>=200 && units<400)
    {
        printf("Units Consumed: %d
",units);
        cu=1.40;
        printf("Cost per Unit: %.2f
",cu);
        bill=units*cu;
        printf("Bill: %.2f
",bill);
        surcharge=0;
        printf("Surcharge: %.2f
",surcharge);
        tbill=surcharge+bill;
        printf("Total Amount: %.2f
",tbill);
    }
    else if(units>=400 && units<600)
    {
        printf("Units Consumed: %d
",units);
        cu=1.60;
        printf("Cost per Unit: %.2f
",cu);
        bill=units*cu;
        printf("Bill: %.2f
",bill);
        surcharge=bill*0.15;
        printf("Surcharge: %.2f
",surcharge);
        tbill=surcharge+bill;
        printf("Total Amount: %.2f
",tbill);
    }
    else if(units>=600 && units<800)
    {
      printf("Units Consumed: %d
",units);
        cu=1.80;
        printf("Cost per Unit: %.2f
",cu);
        bill=units*cu;
        printf("Bill: %.2f
",bill);
        surcharge=bill*0.15;
        printf("Surcharge: %.2f
",surcharge);
        tbill=surcharge+bill;
        printf("Total Amount: %.2f
",tbill);
    } 
     else
     {
        printf("Units Consumed: %d
",units);
        cu=2.00;
        printf("Cost per Unit: %.2f
",cu);
        bill=units*cu;
        printf("Bill: %.2f
",bill);
        surcharge=bill*0.15;
        printf("Surcharge: %.2f
",surcharge);
        tbill=surcharge+bill;
        printf("Total Amount: %.2f
",tbill);
    }
}