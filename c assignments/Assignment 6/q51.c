//inpute cost price and selling price and calculate profit or loss percentage
#include <stdio.h>
int main()
{
    float cp,sp;
    printf("enter cost price and selling price of product : ");
    scanf("%f %f",&cp,&sp);
    if(cp<sp)
    printf("profit percentage is %f",(sp-cp)/cp*100);
    else printf("loss percentage is %f",(cp-sp)/cp*100);
    return 0;

}
