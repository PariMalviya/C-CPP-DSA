//q15. calculate profit on purchasing 25 bananas
#include <stdio.h>
int main()
{
    float costprice,sellingprice,profit;
    printf("Enter cost price : ");
scanf("%f",&costprice);
    printf("Enter selling price : ");
     scanf("%f",&sellingprice);
    profit=(sellingprice-costprice)/12;
    printf("%f",profit*25);
    return 0;

}